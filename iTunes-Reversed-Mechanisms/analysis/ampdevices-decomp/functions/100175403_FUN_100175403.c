// name: FUN_100175403
// address: 100175403

/* WARNING: Type propagation algorithm not settling */

void FUN_100175403(int *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0x63687064) {
    lVar1 = *(long *)(param_1 + 8);
    if ((lVar1 != 0) && (iVar3 = FUN_10015bb96(lVar1,0,0x63686170,1,0), iVar3 != 0)) {
      iVar6 = 2;
      do {
        puVar4 = (undefined8 *)FUN_10015c089(lVar1,iVar3,0x70746368,1,local_5c);
        if (puVar4 != (undefined8 *)0x0) {
          if (local_5c[0] != 8) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "dataSize == sizeof(*cgImagePtr)";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16
                                 );
            }
            FUN_1001782e9(0,0);
          }
          FUN_10017060f(*puVar4);
        }
        iVar3 = FUN_10015bb96(lVar1,0,0x63686170,(int)(short)iVar6,0);
        iVar6 = (short)iVar6 + 1;
      } while (iVar3 != 0);
    }
    FUN_10015b51c(*(undefined8 *)(param_1 + 6));
    FUN_10015b51c(*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 10) != 0) {
      FUN_1001c64c1();
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      FUN_1001c64c1();
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      FUN_1001c64c1();
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x16));
    *param_1 = 0;
    FUN_1001c64c1(param_1);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_100681aca(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

