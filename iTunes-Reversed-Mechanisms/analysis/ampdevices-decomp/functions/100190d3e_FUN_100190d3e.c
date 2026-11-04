// name: FUN_100190d3e
// address: 100190d3e

int FUN_100190d3e(long param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char local_438 [1040];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_100191e06(param_1 + 8,local_438);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      sVar3 = _strlen(local_438);
      lVar4 = FUN_100174592(0,local_438,sVar3,1);
      if (lVar4 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_100693f94(uVar6);
        }
        lVar4 = 0;
      }
      else {
        iVar2 = 0;
        lVar5 = _CFURLEnumeratorCreateForDirectoryURL(DAT_1008c4d90,lVar4,0,0);
        if (lVar5 != 0) {
          *(long *)(param_1 + 0x430) = lVar5;
          goto LAB_100190e2e;
        }
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_100693f1e(uVar6);
        }
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x2b;
      goto LAB_100190e2e;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_10069400a(iVar2,uVar6);
    }
  }
  lVar4 = 0;
LAB_100190e2e:
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

