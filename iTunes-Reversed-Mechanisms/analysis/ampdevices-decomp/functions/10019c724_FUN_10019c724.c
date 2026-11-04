// name: FUN_10019c724
// address: 10019c724

int FUN_10019c724(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x68746463)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100699b9e(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001e9de0(param_1 + 2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        lVar5 = *(long *)(param_1 + 0x14);
        if (lVar5 != 0) {
          do {
            FUN_10019f28b(param_1 + 0x14,param_1 + 0x16,lVar5);
            FUN_10019f3d1(param_1 + 0x18,param_1 + 0x1a,lVar5);
            param_1[0x1c] = param_1[0x1c] + 1;
            FUN_10019c3d3(lVar5,0xffffff80);
            lVar5 = *(long *)(param_1 + 0x14);
          } while (lVar5 != 0);
        }
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) {
          iVar2 = 0;
        }
        else {
          cVar1 = (char)param_1[0x28];
          iVar2 = 0;
          do {
            if (cVar1 == '\0') {
              iVar2 = FUN_1001e8dd6(param_1 + 0x1e,0,0);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = iVar2;
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              *(undefined1 *)(param_1 + 0x28) = 1;
              cVar1 = '\x01';
            }
            *(undefined1 *)(plVar4 + 0x32) = 1;
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        FUN_1001e9eb9(param_1 + 2);
        if ((char)param_1[0x28] != '\0') {
          FUN_1001e944c(param_1 + 0x1e);
          FUN_1001e9587(param_1 + 0x1e);
          *(undefined1 *)(param_1 + 0x28) = 0;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100699b32(iVar2,uVar3);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

