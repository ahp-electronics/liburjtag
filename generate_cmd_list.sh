#!/bin/bash

export all_cmd_files=$@

cmds=$(sed -n '/^const urj_cmd_t urj_cmd_/{s:.*urj_cmd_::;s: =.*::;p;}' ${all_cmd_files});
for c in $$cmds ; do
    printf '#ifndef URJ_CMD_SKIP_%s\n_URJ_CMD(%s)\n#endif\n' $$c $$c;
done > generated_cmd_list.h.tmp;
if cmp -s generated_cmd_list.h generated_cmd_list.h.tmp; then
    echo generated_cmd_list.h is unchanged;
    rm -f generated_cmd_list.h.tmp;
else
    echo updating generated_cmd_list.h;
    mv generated_cmd_list.h.tmp generated_cmd_list.h;
fi
