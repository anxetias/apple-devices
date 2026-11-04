// name: FUN_1002d6350
// address: 1002d6350

void FUN_1002d6350(void)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_50;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_100264373();
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x36) != '\0')) && (*(char *)(lVar5 + 0x6db2) != '\0')) {
    iVar4 = _FSCreateVolumeOperation(&local_50);
    if (iVar4 == 0) {
      sVar3 = FUN_10018cbee(lVar5 + 0x48);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,uVar6,1,"calling FSEjectVolumeAsync",&local_48,2);
      }
      *(undefined1 *)(lVar5 + 0x3d) = 1;
      *(undefined8 *)(lVar5 + 0x6db8) = 0;
      uVar1 = *(undefined4 *)(lVar5 + 0xc);
      uVar6 = FUN_1001727a0();
      iVar4 = _FSEjectVolumeAsync((int)sVar3,0,local_50,uVar1,FUN_1002d65e7,uVar6,
                                  *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) goto LAB_1002d654d;
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar4;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar4 == 0) goto LAB_1002d654d;
      }
      *(undefined1 *)(lVar5 + 0x3d) = 0;
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_48 = local_48 & 0xffff0000;
        __os_log_impl(0x100000000,uVar6,1,"calling JRUnmountAndEjectVolume",&local_48,2);
      }
      iVar4 = FUN_10018a0cf(lVar5 + 0x48);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar4;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
LAB_1002d654d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

