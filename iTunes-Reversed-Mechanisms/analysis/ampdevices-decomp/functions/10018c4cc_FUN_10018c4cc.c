// name: FUN_10018c4cc
// address: 10018c4cc

int FUN_10018c4cc(undefined8 param_1,undefined2 *param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_e0 [6];
  short local_da;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_da = 0;
  iVar3 = FUN_10018ed8e();
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      cVar1 = FUN_100183b4f(param_1);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006918f9(uVar4);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x965;
      }
      else {
        sVar2 = _FSFindFolder((int)local_da,0x74727368,1,local_88);
        if (sVar2 == 0) {
          iVar3 = FUN_10018c416(local_88,param_2,local_d8);
          if (iVar3 != 0) {
            if ((param_3 & 1) != 0) {
              sVar2 = _FSCreateDirectoryUnicode
                                (local_88,*param_2,param_2 + 1,0,0,local_d8,0,local_e0);
              iVar3 = (int)sVar2;
            }
            if (iVar3 == -0x80) goto LAB_10018c5d5;
            if (iVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                FUN_1006917b5(iVar3,uVar4);
              }
              goto LAB_10018c5d5;
            }
          }
          iVar3 = FUN_10018e6ca(local_d8,param_4);
          if ((iVar3 != -0x80) && (iVar3 != 0)) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_100691821(iVar3,uVar4);
            }
          }
        }
        else {
          iVar3 = -0x80;
          if (sVar2 != -0x80) {
            iVar3 = (int)sVar2;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10069188d(iVar3,uVar4);
            }
          }
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10069196f(iVar3,uVar4);
      }
    }
  }
LAB_10018c5d5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

