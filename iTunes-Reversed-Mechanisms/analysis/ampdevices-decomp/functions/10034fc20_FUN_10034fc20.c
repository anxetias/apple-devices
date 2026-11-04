// name: FUN_10034fc20
// address: 10034fc20

void FUN_10034fc20(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_90 [16];
  long *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  long local_4e;
  undefined2 local_46;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1[4] != 2) goto LAB_10034ff7e;
  lVar7 = *param_1;
  lVar5 = param_1[1];
  local_68 = *(undefined8 *)(lVar7 + 0x30);
  cVar1 = FUN_100170633(lVar5,&cf_Media);
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(lVar5,&cf_Ringtone);
    local_5c = 0x1004000;
    local_70 = 0;
    if (cVar1 != '\0') goto LAB_10034fce3;
    cVar1 = FUN_100170633(lVar5,&cf_VoiceMemo);
    local_5c = 0x100000;
    if (cVar1 != '\0') goto LAB_10034fce3;
    cVar1 = FUN_100170633(lVar5,&cf_Book);
    local_5c = 0xc00000;
    local_70 = 0;
    if (cVar1 != '\0') goto LAB_10034fce3;
    uVar4 = 0;
  }
  else {
    local_5c = 0xfe2fbfff;
    local_70 = 0x1d04000;
LAB_10034fce3:
    local_80 = param_1;
    uVar4 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    local_78 = lVar5;
    cVar1 = FUN_100170633(lVar5,&cf_Media);
    if ((cVar1 != '\0') && (*(ushort *)(lVar7 + 100) < 0x800)) {
      for (lVar5 = FUN_1004cf9b5(local_68); lVar5 != 0; lVar5 = FUN_1005e386a(lVar5)) {
        uVar6 = FUN_10033c696(lVar7,&cf_insert_artist,lVar5);
        FUN_1001709a5(uVar4,uVar6);
        FUN_10017060f(uVar6);
      }
      for (lVar5 = FUN_100277149(local_68); lVar5 != 0; lVar5 = FUN_10027728e(lVar5)) {
        uVar6 = FUN_10033c199(lVar7,&cf_insert_album,lVar5);
        FUN_1001709a5(uVar4,uVar6);
        FUN_10017060f(uVar6);
      }
    }
    for (lVar5 = FUN_1002f930c(local_68); lVar5 != 0; lVar5 = FUN_1002f9451(lVar5)) {
      if ((*(byte *)(lVar5 + 0xc5) & 8) == 0) {
        uVar2 = FUN_1004744bf(lVar5,0);
        if (((uint)local_70 & uVar2) == 0 && (local_5c & uVar2) != 0) {
          uVar6 = FUN_1003382a2(lVar7,&cf_insert_track,lVar5,0,0,0);
          FUN_1001709a5(uVar4);
          FUN_10017060f(uVar6);
        }
      }
    }
    cVar1 = FUN_100170633(local_78,&cf_Media);
    if (cVar1 != '\0') {
      for (lVar5 = FUN_100315ede(local_68); lVar5 != 0; lVar5 = FUN_100316031(lVar5)) {
        cVar1 = FUN_10033b675(lVar5,lVar7);
        if (cVar1 != '\0') {
          uVar6 = FUN_10033b6c1(lVar7,&cf_insert_playlist,lVar5);
          FUN_1001709a5(uVar4,uVar6);
          FUN_10017060f(uVar6);
        }
      }
    }
    param_1 = local_80;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      uVar3 = FUN_10017076e(uVar4);
      FUN_10034ffdb(local_90,uVar4);
      local_44 = FUN_1001b83ae(local_90);
      local_58 = 0x4000302;
      local_50 = 0x842;
      local_4e = local_78;
      local_46 = 0x822;
      local_54 = uVar3;
      __os_log_impl(0x100000000,uVar6,1,
                    "airtraffic> created %d sync operations for reset sync for dataclass %{public}@ - %{public}s"
                    ,&local_58,0x1c);
      FUN_1001b7a50(local_90);
    }
  }
  FUN_100165850(uVar4,param_1[5]);
  lVar7 = FUN_1001705fc(uVar4);
  FUN_10017060f(param_1[5]);
  param_1[5] = lVar7;
  FUN_10017060f(uVar4);
LAB_10034ff7e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

