// name: FUN_1004b4c70
// address: 1004b4c70

int FUN_1004b4c70(char *param_1,long param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar6 = 0;
  iVar5 = 0;
  if (*param_1 != '\0') {
    if (param_1[0x20] == '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "( (&inHashComputation->expectedHash)->hash[0] != 0 )";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar6 = -0x32;
    }
    else {
      if (param_2 == 0) {
        param_1[1] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        if (*(long *)(param_1 + 0xa8) != 0) {
          FUN_100179a7b();
          param_1[0xa8] = '\0';
          param_1[0xa9] = '\0';
          param_1[0xaa] = '\0';
          param_1[0xab] = '\0';
          param_1[0xac] = '\0';
          param_1[0xad] = '\0';
          param_1[0xae] = '\0';
          param_1[0xaf] = '\0';
        }
      }
      if (param_3 != '\0') {
        if (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8) == param_2) {
          param_1[1] = '\x01';
          if (*(long *)(param_1 + 0xa8) == 0) {
            pcVar1 = param_1 + 0xa8;
            iVar3 = FUN_100179732(3,pcVar1);
            if (iVar3 != -0x80) {
              iVar6 = iVar3;
              if (iVar3 == 0) goto LAB_1004b4dc7;
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              iVar6 = iVar5;
              if (iVar3 == 0) goto LAB_1004b4dc7;
            }
            param_1[1] = '\0';
            param_1[0x18] = '\0';
            param_1[0x19] = '\0';
            param_1[0x1a] = '\0';
            param_1[0x1b] = '\0';
            param_1[0x1c] = '\0';
            param_1[0x1d] = '\0';
            param_1[0x1e] = '\0';
            param_1[0x1f] = '\0';
            iVar6 = iVar3;
            if (*(long *)(param_1 + 0xa8) != 0) {
              FUN_100179a7b();
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              pcVar1[4] = '\0';
              pcVar1[5] = '\0';
              pcVar1[6] = '\0';
              pcVar1[7] = '\0';
            }
          }
        }
        else {
          param_1[1] = '\0';
          param_1[0x18] = '\0';
          param_1[0x19] = '\0';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          param_1[0x1c] = '\0';
          param_1[0x1d] = '\0';
          param_1[0x1e] = '\0';
          param_1[0x1f] = '\0';
          iVar6 = iVar5;
          if (*(long *)(param_1 + 0xa8) != 0) {
            FUN_100179a7b();
            param_1[0xa8] = '\0';
            param_1[0xa9] = '\0';
            param_1[0xaa] = '\0';
            param_1[0xab] = '\0';
            param_1[0xac] = '\0';
            param_1[0xad] = '\0';
            param_1[0xae] = '\0';
            param_1[0xaf] = '\0';
          }
        }
      }
    }
  }
LAB_1004b4dc7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

