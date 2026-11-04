// name: FUN_1001b1d36
// address: 1001b1d36

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001b1d36(char param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long local_58 [4];
  long *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(&DAT_1008c5200,0x140);
  _DAT_1008c5260 = 0x72656479;
  DAT_1008c5268 = 0;
  _DAT_1008c5270 = 0;
  _DAT_1008c5288 = 0x6c746379;
  DAT_1008c5290 = 0;
  uRam00000001008c5298 = 0;
  _DAT_1008c52b0 = 0x626c6b64;
  DAT_1008c52b8 = 0;
  uRam00000001008c52c0 = 0;
  _DAT_1008c52e8 = 0x64656164;
  DAT_1008c52f0 = 0;
  uRam00000001008c52f8 = 0;
  _DAT_1008c5280 = 0x3fd0624dd2f1a9fc;
  _DAT_1008c52a8 = 0x3fa0624dd2f1a9fc;
  DAT_1008c52d0 = 0xbff0000000000000;
  iVar2 = FUN_1001e9c3e(&DAT_1008c5200);
  if (iVar2 == -0x80) {
LAB_1001b1ee7:
    pvVar3 = (void *)0x0;
  }
  else {
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006a0519(iVar2,uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      goto LAB_1001b1ee7;
    }
    pvVar3 = operator_new(0x110,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar3 == (void *)0x0) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006a04a3(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      iVar2 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1001b1ee7;
    }
    local_38 = (long *)0x0;
    FUN_1001b0116(pvVar3,local_58,"main");
    if (local_38 == local_58) {
      lVar4 = 0x20;
LAB_1001b1f44:
      (**(code **)(*local_38 + lVar4))();
    }
    else {
      lVar4 = 0x28;
      if (local_38 != (long *)0x0) goto LAB_1001b1f44;
    }
    DAT_1008c5248 = 2;
    *(undefined4 *)((long)pvVar3 + 0x18) = 1;
    FUN_1001dfbb3("main",(long)pvVar3 + 0xbc,0x40);
    uVar5 = FUN_1001edfdf();
    *(undefined8 *)((long)pvVar3 + 0x90) = uVar5;
    iVar2 = FUN_1001b2884(pvVar3);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *(undefined4 *)((long)pvVar3 + 0x1c) = 1;
        *(undefined4 *)((long)pvVar3 + 0x58) = 0;
        uVar5 = FUN_1001ebd46();
        *(undefined8 *)((long)pvVar3 + 0x40) = uVar5;
        *(undefined8 *)((long)pvVar3 + 0x28) = 0;
        DAT_1008c5340 = FUN_1001727a0();
        if (DAT_1008c5340 == 0) {
          uVar5 = FUN_1001cc310();
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_1006a03c1(uVar5);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
          FUN_1001782e9(0,0);
        }
        else {
          DAT_1008c5348 = FUN_100172c7d(0,0);
          if (DAT_1008c5348 != 0) {
            uVar5 = *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110;
            FUN_1001728e7(DAT_1008c5340,DAT_1008c5348,uVar5);
            if (param_1 != '\0') {
              DAT_1008c5350 = FUN_100172d89(0,0x60,1,0,FUN_1001b09e0,0);
              if (DAT_1008c5350 == 0) {
                uVar5 = FUN_1001cc310();
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  FUN_1006a02d5(uVar5);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar5);
                FUN_1001782e9(0,0);
                iVar2 = -0x6c;
                goto LAB_1001b1ee9;
              }
              FUN_100172a19(DAT_1008c5340,DAT_1008c5350,uVar5);
            }
            *(undefined4 *)((long)pvVar3 + 0x20) = 1;
            iVar2 = 0;
            DAT_1008c5250 = pvVar3;
            DAT_1008c5258 = pvVar3;
            goto LAB_1001b1f1a;
          }
          uVar5 = FUN_1001cc310();
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_1006a034b(uVar5);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
          FUN_1001782e9(0,0);
        }
        iVar2 = -0x32;
      }
      else {
        uVar5 = FUN_1001cc310();
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006a0437(iVar2,uVar5);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      }
    }
  }
LAB_1001b1ee9:
  cVar1 = FUN_1001e9c23(&DAT_1008c5200);
  if (cVar1 != '\0') {
    FUN_1001e9d75(&DAT_1008c5200);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_1001b01f4(pvVar3);
    operator_delete(pvVar3);
  }
LAB_1001b1f1a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

