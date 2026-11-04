// name: FUN_10033f3bb
// address: 10033f3bb

void FUN_10033f3bb(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined6 uStack_52;
  undefined2 local_4c;
  long local_4a;
  undefined2 local_42;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1003400ee(param_2,&cf_Dataclass);
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0x7c03fd;
      uStack_56 = 1;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') goto LAB_10033f66c;
    uVar6 = _ATCFMessageGetName(param_2);
    local_64 = 0x879810;
    uStack_5a = (undefined4)uVar6;
    uStack_56 = (undefined2)((ulong)uVar6 >> 0x20);
    uStack_54 = (undefined2)((ulong)uVar6 >> 0x30);
LAB_10033f659:
    uStack_5e = 0;
    uStack_60 = 1;
    uStack_5c = 0x842;
    local_68 = 0x8420202;
    pcVar8 = "airtraffic> missing %{public}@ in %{public}@ message";
    uVar6 = 0x16;
  }
  else {
    lVar4 = FUN_1003400ee(param_2,&cf_AssetID);
    if (lVar4 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = 0x7a0a90;
        uStack_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x822;
        uStack_5a = 0x7c03e2;
        uStack_56 = 1;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') goto LAB_10033f66c;
      uVar6 = _ATCFMessageGetName(param_2);
      local_64 = 0x8797f0;
      uStack_5a = (undefined4)uVar6;
      uStack_56 = (undefined2)((ulong)uVar6 >> 0x20);
      uStack_54 = (undefined2)((ulong)uVar6 >> 0x30);
      goto LAB_10033f659;
    }
    lVar5 = FUN_10034bb06(param_2,&cf_ErrorCode);
    if (lVar5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = 0x7a0a90;
        uStack_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x822;
        uStack_5a = 0x7c2205;
        uStack_56 = 1;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') goto LAB_10033f66c;
      uVar6 = _ATCFMessageGetName(param_2);
      local_64 = 0x87b970;
      uStack_5a = (undefined4)uVar6;
      uStack_56 = (undefined2)((ulong)uVar6 >> 0x20);
      uStack_54 = (undefined2)((ulong)uVar6 >> 0x30);
      goto LAB_10033f659;
    }
    uVar2 = FUN_100169779(lVar5,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') goto LAB_10033f66c;
    uVar6 = FUN_10032f390(uVar2);
    local_68 = 0x4000502;
    uStack_60 = 0x822;
    uStack_5e = (undefined2)uVar6;
    uStack_5c = (undefined2)((ulong)uVar6 >> 0x10);
    uStack_5a = (undefined4)((ulong)uVar6 >> 0x20);
    uStack_56 = 0x842;
    uStack_54 = (undefined2)*(undefined8 *)(param_1 + 0x152c8);
    uStack_52 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x152c8) >> 0x10);
    local_4c = 0x842;
    local_42 = 0x842;
    pcVar8 = 
    "airtraffic> got error %d (%{public}s) for device %{public}@, dataclass %{public}@, identifier \"%{public}@\""
    ;
    uVar6 = 0x30;
    local_64 = uVar2;
    local_4a = lVar3;
    local_40 = lVar4;
  }
  __os_log_impl(0x100000000,uVar7,1,pcVar8,&local_68,uVar6);
LAB_10033f66c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

