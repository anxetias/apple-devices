// name: FUN_100537081
// address: 100537081

bool FUN_100537081(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  char local_2d8 [80];
  undefined1 local_288 [32];
  undefined4 local_268;
  char *local_264;
  undefined2 local_25c;
  int local_25a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_228;
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      pcVar4 = "folderSpec != nullptr";
LAB_1005371ff:
      *(char **)((long)puVar5 + 0xe) = pcVar4;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",puVar5,0x16);
    }
LAB_100537147:
    bVar6 = false;
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = FUN_10017d477(param_1,local_2d8,&local_228);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_2d8[0] == '\0') {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            puVar5 = &local_268;
            local_268 = 0x8220202;
            local_264 = "Assertion failure";
            local_25c = 0x822;
            pcVar4 = "folderInfo.isDirectory";
            goto LAB_1005371ff;
          }
          goto LAB_100537147;
        }
        if ((short)local_228 != 0) {
          FUN_1001e222d(&local_228,&local_268);
          FUN_1001e4c6b(&local_268,local_288);
          cVar1 = FUN_1001df7be("tmp",local_288,1);
          bVar6 = cVar1 != '\0';
          goto LAB_100537173;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_268 = 0x8220202;
          local_264 = "Assertion failure";
          local_25c = 0x400;
          local_25a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_268,0x12);
        }
      }
    }
    bVar6 = false;
  }
LAB_100537173:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

