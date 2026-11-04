// name: FUN_1005dcade
// address: 1005dcade

char FUN_1005dcade(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  cVar2 = '\0';
  FUN_10017610a(param_1,0,0x736d7044,0,8,&local_60);
  if (local_60 != 0) {
    lVar4 = FUN_1005e203d();
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "table != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = '\0';
      FUN_1001782e9(0,0);
    }
    else {
      iVar3 = FUN_100176de6(param_1);
      if ((ulong)*(uint *)(lVar4 + 4) == 0) {
        cVar2 = '\0';
        uVar6 = 0;
      }
      else {
        lVar7 = 0;
        uVar6 = 0;
        cVar2 = '\0';
        do {
          if ((*(char *)(lVar4 + 8 + lVar7) == '\0') && (*(int *)(lVar4 + 0x24 + lVar7) == iVar3)) {
            uVar1 = *(ulong *)(lVar4 + 0x10 + lVar7);
            if (uVar1 <= uVar6) {
              uVar6 = uVar1;
            }
            if (cVar2 == '\0') {
              uVar6 = uVar1;
            }
            cVar2 = '\x01';
          }
          lVar7 = lVar7 + 0x20;
        } while ((ulong)*(uint *)(lVar4 + 4) << 5 != lVar7);
      }
      *param_3 = uVar6;
    }
  }
  FUN_10017060f(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2;
}

