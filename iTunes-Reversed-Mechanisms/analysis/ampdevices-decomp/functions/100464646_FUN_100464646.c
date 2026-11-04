// name: FUN_100464646
// address: 100464646

long FUN_100464646(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ushort local_4a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100170ea9(DAT_1008c4d90,0);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "jpegData != nullptr";
LAB_100464858:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10046478c:
    lVar6 = 0;
  }
  else {
    FUN_1001710c1(lVar3,&DAT_10074a930,2);
    FUN_1001710c1(lVar3,&DAT_10074a932,2);
    sVar2 = FUN_100170ef7(param_1);
    local_4a = (sVar2 + 2U) * 0x100 | (ushort)(sVar2 + 2U) >> 8;
    FUN_1001710c1(lVar3,&local_4a,2);
    uVar4 = FUN_100170f3b(param_1);
    uVar5 = FUN_100170ef7(param_1);
    FUN_1001710c1(lVar3,uVar4,uVar5);
    FUN_1001710c1(lVar3,&DAT_10074a940,0x69);
    lVar6 = _CGImageSourceCreateWithData(lVar3,0);
    if (lVar6 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "imageSource != nullptr";
        goto LAB_100464858;
      }
      goto LAB_10046478c;
    }
    lVar7 = _CGImageSourceCopyPropertiesAtIndex(lVar6,0,0);
    if (lVar7 != 0) goto LAB_10046479b;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "imagePropertiesDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  lVar7 = 0;
  FUN_1001782e9(0,0);
LAB_10046479b:
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

