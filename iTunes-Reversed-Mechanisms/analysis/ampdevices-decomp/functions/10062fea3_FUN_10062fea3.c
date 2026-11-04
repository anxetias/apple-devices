// name: FUN_10062fea3
// address: 10062fea3

void FUN_10062fea3(long param_1,byte param_2,long param_3,ulong param_4,long *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  bool bVar19;
  byte local_278;
  long local_260 [2];
  undefined *local_250;
  uint local_244;
  undefined *local_240;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                     (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  local_250 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar12);
  local_244 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar9 = (uint)param_3;
    iVar18 = (uVar9 & 0xe00) * 0x20;
    iVar1 = iVar18 + 0x60000;
    if ((uVar9 >> 0xc & 1) == 0) {
      iVar1 = iVar18;
    }
    local_244 = (uVar9 & 0x3e000) << 7 | iVar1 + (uVar9 & 0xff) + (uVar9 & 0x100) * 4;
  }
  if ((param_4 != 0) && (param_3 == 0xb1 && (param_4 & 4) == 0)) {
    local_244 = local_244 | 8;
  }
  if (param_1 == 0) {
    uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                       (PTR__OBJC_CLASS___NSError_10082c660,
                        PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                        *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffe4,0);
    lVar14 = _objc_retainAutoreleasedReturnValue(uVar12);
    if (lVar14 != 0) {
      if ((param_5 != (long *)0x0) && (*param_5 == 0)) {
        lVar17 = _objc_retainAutorelease(lVar14);
        *param_5 = lVar17;
      }
      puVar3 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(local_250);
      (*(code *)puVar3)(lVar14);
      local_250 = PTR____NSArray0__struct_10082dfe8;
    }
  }
  else {
    plVar13 = (long *)FUN_1004cf9b5();
    puVar6 = PTR_s_dictionary_10088c4a0;
    puVar5 = PTR_s_addObject__10088c218;
    puVar4 = PTR_s_numberWithUnsignedLongLong__10088be20;
    puVar3 = PTR_s_numberWithUnsignedInt__10088be18;
    local_278 = param_2 & 0xf;
    uVar9 = ~local_244;
    local_240 = PTR_s_setObject_forKey__10088c000;
    for (; plVar13 != (long *)0x0; plVar13 = (long *)FUN_1005e386a(plVar13)) {
      bVar19 = true;
      if ((*(byte *)(param_1 + 0x1bb4) & 0x40) != 0) {
        bVar7 = FUN_1005e4b52(plVar13);
        bVar19 = (local_278 & bVar7) != 0;
      }
      if (((param_3 == 0xffffffff) || (!bVar19)) ||
         ((uVar10 = FUN_1005e5f32(plVar13), (local_244 & uVar10) != 0 &&
          ((uVar10 & uVar9 & 0x20a004) == 0)))) {
        if ((param_4 != 0) && (bVar19)) {
          cVar8 = FUN_1002be476(plVar13);
          bVar19 = cVar8 != '\0';
        }
        if (bVar19) {
          uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,puVar6);
          lVar14 = _objc_retainAutoreleasedReturnValue(uVar12);
          FUN_1005e4722(plVar13,0,local_238);
          FUN_1001b8dfc(local_260,local_238);
          uVar12 = FUN_1001bdcb0(local_260,0);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_Name);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          FUN_1001b7a50(local_260);
          FUN_1005e4722(plVar13,1,local_238);
          FUN_1001b8dfc(local_260,local_238);
          uVar12 = FUN_1001bdcb0(local_260,0);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_SortName);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          FUN_1001b7a50(local_260);
          puVar2 = PTR__OBJC_CLASS___NSNumber_10082c690;
          uVar11 = (**(code **)*plVar13)(plVar13);
          uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(puVar2,puVar3,uVar11);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_AlbumsCount);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          puVar2 = PTR__OBJC_CLASS___NSNumber_10082c690;
          if ((*(byte *)((long)plVar13 + 0x5d) & 2) == 0) {
            uVar11 = FUN_1005e5e84(plVar13);
            *(undefined4 *)((long)plVar13 + 0x8c) = uVar11;
            *(byte *)((long)plVar13 + 0x5d) = *(byte *)((long)plVar13 + 0x5d) | 2;
          }
          else {
            uVar11 = *(undefined4 *)((long)plVar13 + 0x8c);
          }
          uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(puVar2,puVar3,uVar11);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_LastDateAdded);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSNumber_10082c690,puVar4,plVar13[3]);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_PersistentID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          puVar15 = (undefined8 *)FUN_1005e3fda(plVar13);
          if (puVar15 != (undefined8 *)0x0) {
            uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar4,*puVar15);
            uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
            (*(code *)PTR__objc_msgSend_10082c770)
                      (lVar14,local_240,uVar12,&cf_RepresentativePersistentID);
            (*(code *)PTR__objc_release_10082c7b0)(uVar12);
            uVar12 = *(undefined8 *)(*(long *)(puVar15[0xb] + 0x10) + 0x40);
            FUN_10047a7b5(puVar15,local_238);
            FUN_1001b8dfc(local_260,local_238);
            uVar16 = FUN_1001bdcb0(local_260,0);
            uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
            FUN_1001b7a50(local_260);
            (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar16,&cf_GenreName);
            uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar4,uVar12);
            uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
            (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_GenreCloudID);
            (*(code *)PTR__objc_release_10082c7b0)(uVar12);
            (*(code *)PTR__objc_release_10082c7b0)(uVar16);
          }
          FUN_1002e5a27(local_260,plVar13);
          if (local_260[0] != 0) {
            (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,local_260[0],&cf_ArtworkUUID);
          }
          puVar2 = PTR__OBJC_CLASS___NSNumber_10082c690;
          uVar12 = (**(code **)(*plVar13 + 0xe0))(plVar13);
          uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(puVar2,puVar4,uVar12);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)(lVar14,local_240,uVar12,&cf_SubscriptionAdamID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          FUN_1001b7a5c(local_238,plVar13 + 0x15);
          uVar12 = FUN_1001bdcb0(local_238,0);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (lVar14,local_240,uVar12,&cf_CloudUniversalLibraryID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar12);
          FUN_1001b7a50(local_238);
          FUN_1001ab006(local_260);
          if (lVar14 != 0) {
            (*(code *)PTR__objc_msgSend_10082c770)(local_250,puVar5,lVar14);
          }
          (*(code *)PTR__objc_release_10082c7b0)(lVar14);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(local_250);
  return;
}

