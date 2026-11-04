// name: getPersonDictionary
// address: 1004a5fd8

/* Function Stack Size: 0x10 bytes */

ID AMPPhotoKitImporter::getPersonDictionary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_138;
  long lStack_130;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  puVar1 = PTR__OBJC_CLASS___PHPerson_10082b528;
  IVar2 = getFetchOptionsForFetchLimit_(param_1,PTR_s_getFetchOptionsForFetchLimit__10088d398,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  IVar2 = PHPerson::fetchPersonsWithOptions_
                    ((ID)puVar1,PTR_s_fetchPersonsWithOptions__10088d598,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (long *)0x0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_c0 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_138,local_b8,
                     0x10);
  if (lVar5 != 0) {
    local_e0 = *local_128;
    do {
      puVar1 = PTR_s_length_10088bdf0;
      local_f0 = PTR_s_name_10088be00;
      local_d8 = PTR_s_uuid_10088c5d8;
      local_d0 = PTR_s_setObject_forKeyedSubscript__10088be60;
      lVar6 = 0;
      local_e8 = lVar5;
      do {
        if (*local_128 != local_e0) {
          _objc_enumerationMutation(local_c0);
        }
        uVar3 = *(undefined8 *)(lStack_130 + lVar6 * 8);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_f0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        if (lVar5 != 0) {
          uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_d8);
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          (*(code *)PTR__objc_msgSend_10082c770)(local_c8,local_d0,uVar3,uVar4);
          (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (local_e8 != lVar6);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_138,
                         local_b8,0x10);
    } while (lVar5 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar2 = _objc_autoreleaseReturnValue(local_c8);
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

