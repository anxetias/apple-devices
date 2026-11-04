// name: FUN_1001c3dbc
// address: 1001c3dbc

long FUN_1001c3dbc(ushort param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 local_488 [16];
  undefined1 local_478 [8];
  long local_470;
  long local_468 [2];
  long local_458;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != 0x6672616d) && (param_2 != 0x7066726d)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a70bc(uVar4);
    }
    FUN_1001782e9(0,0);
    lVar3 = 0;
    goto LAB_1001c404b;
  }
  lVar3 = FUN_1001c3cc7(param_3);
  if (lVar3 != 0) goto LAB_1001c404b;
  FUN_1001aa318(&local_470);
  if (SBORROW2(0,param_1 & 0xfffd)) {
    FUN_1001ef5db(local_468,param_2,param_3);
    FUN_1001aaadc(&local_470,local_468);
    plVar5 = local_468;
LAB_1001c3e57:
    FUN_1001ab3c4(plVar5);
    if (local_470 == 0) goto LAB_1001c403c;
    lVar3 = FUN_100174c64(DAT_1008c4d98);
    if (lVar3 == 0) goto LAB_1001c403c;
    cVar1 = FUN_1001c3cfb(lVar3,param_3);
    if (cVar1 != '\0') {
      FUN_10017060f(lVar3);
    }
  }
  else {
    FUN_1001aa318(&local_458);
    iVar2 = FUN_100193150((int)(short)param_1,param_2,0,local_450);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        uVar4 = FUN_10016ff43(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,local_450);
        FUN_1001ab218(local_468,uVar4);
        FUN_1001aaadc(&local_458,local_468);
        FUN_1001ab3c4(local_468);
        if (local_458 != 0) {
          FUN_1001b7eb0(local_488,param_3);
          FUN_1001b7a5c(local_468,local_488);
          FUN_1001ac418(local_478,&local_458,local_468);
          FUN_1001aaadc(&local_470,local_478);
          FUN_1001ab3c4(local_478);
          FUN_1001b7a50(local_468);
          FUN_1001b7a50(local_488);
          plVar5 = &local_458;
          goto LAB_1001c3e57;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006a6fda(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006a7050(iVar2,uVar4);
        }
      }
    }
    FUN_1001ab3c4(&local_458);
LAB_1001c403c:
    lVar3 = 0;
  }
  FUN_1001ab3c4(&local_470);
LAB_1001c404b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

