// name: FUN_10062eb8b
// address: 10062eb8b

void FUN_10062eb8b(int *param_1,char param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  long local_80;
  long local_78;
  undefined1 local_70 [19];
  char local_5d;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_b0);
  FUN_1001b7a44(local_a0);
  FUN_1001b7a44(local_90);
  FUN_1001b7a44(local_70);
  uVar5 = FUN_10062f350((short)param_1[4],(int)param_2,&local_5d);
  if (local_5d != '\0') {
    uVar6 = 0;
    goto LAB_10062f13e;
  }
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,PTR_s_dictionary_10088c4a0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  if (*param_1 == 0x706c7374) {
LAB_10062ec6d:
    bVar4 = *(byte *)(param_1 + 0xa6);
    if ((bVar4 & 1) == 0) goto LAB_10062ec8c;
    bVar8 = *(char *)((long)param_1 + 0x2a3) != '\0';
  }
  else {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 != '\0') goto LAB_10062ec6d;
    bVar4 = *(byte *)(param_1 + 0xa6);
LAB_10062ec8c:
    bVar8 = false;
  }
  if (((((bVar4 & 1) == 0) && ((short)param_1[4] != 0xd)) ||
      ((local_5c = 1, (bVar4 >> 1 & 1) != 0 || bVar8 &&
       ((!bVar8 || (local_5c = 2, (short)param_1[4] != 0xd && (bVar4 & (short)param_1[4] == 0) == 0)
        ))))) && (local_5c = 3, (bVar4 & 2) == 0)) {
    local_5c = (uint)((short)param_1[4] == 0x20) << 2;
  }
  FUN_100486d8f(&local_58,param_1);
  FUN_1001b80b2(local_b0,&local_58);
  FUN_1001b7a50(&local_58);
  FUN_100487ce4(&local_58,param_1);
  FUN_1001b80b2(local_a0,&local_58);
  FUN_1001b7a50(&local_58);
  FUN_10048836b(&local_58,param_1);
  FUN_1001b80b2(local_90,&local_58);
  FUN_1001b7a50(&local_58);
  if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,&cf_Primary);
  }
  if (*(long *)(param_1 + 10) != 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)(*(long *)(param_1 + 10) + 0x60));
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,PTR_s_setObject_forKey__10088c000,uVar7,&cf_ParentPersistentID);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  if (param_1[0x9b] != 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      ((double)(uint)(param_1[0x9b] - param_3) -
                       *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                       PTR__OBJC_CLASS___NSDate_10082df88,
                       PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,PTR_s_setObject_forKey__10088c000,uVar7,&cf_AddedDate);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  uVar7 = FUN_1001bdcb0(local_b0,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar2 = PTR_s_setObject_forKey__10088c000;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setObject_forKey__10088c000,uVar7,&cf_Name);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = FUN_1001bdcb0(local_a0,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_Description);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = FUN_1001bdcb0(local_90,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_Owner);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,
                     PTR_s_numberWithUnsignedLongLong__10088be20,*(undefined8 *)(param_1 + 0x18));
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_PersistentID);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  puVar1 = PTR_s_numberWithUnsignedInt__10088be18;
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInt__10088be18,
                     uVar5);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_DistinguishedKind);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,puVar1,local_5c);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_Kind);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  FUN_1002e5cf1(&local_80,param_1);
  if (local_80 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,local_80,&cf_ArtworkUUID);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,puVar2,PTR____kCFBooleanTrue_10082e000,&cf_HasArtwork);
  }
  FUN_100488448(&local_58,param_1);
  FUN_1001b80b2(local_70,&local_58);
  FUN_1001b7a50(&local_58);
  cVar3 = FUN_1001b8428(local_70);
  if (cVar3 == '\0') {
    uVar7 = FUN_1001bdcb0(local_70,0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_MPVendorTag);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  FUN_1004883aa(&local_58,param_1);
  FUN_1001b80b2(local_70,&local_58);
  FUN_1001b7a50(&local_58);
  cVar3 = FUN_1001b8428(local_70);
  if (cVar3 == '\0') {
    uVar7 = FUN_1001bdcb0(local_70,0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_MPVendorID);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  FUN_1002e5cf1(&local_78,param_1);
  if (local_78 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,local_78,&cf_ArtworkUUID);
  }
  FUN_1004882bb(&local_58,param_1);
  uVar7 = FUN_1001bdcb0(&local_58,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar2,uVar7,&cf_GlobalID);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  FUN_1001b7a50(&local_58);
  FUN_1001ab006(&local_78);
  FUN_1001ab006(&local_80);
LAB_10062f13e:
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_90);
  FUN_1001b7a50(local_a0);
  FUN_1001b7a50(local_b0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(uVar6);
  return;
}

