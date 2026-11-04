// name: FUN_1001ef5db
// address: 1001ef5db

undefined8 FUN_1001ef5db(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar7 = &cf_PrivateFrameworks;
  if (param_2 == 0x6672616d) {
    pcVar7 = &cf_Frameworks;
  }
  local_f8 = param_3;
  local_d0 = param_1;
  local_d8 = (*(code *)PTR__objc_retain_10082c7b8)(pcVar7);
  uVar3 = _NSSearchPathForDirectoriesInDomains(5,0x408,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = (long *)0x0;
  uStack_140 = 0;
  local_158 = 0;
  lStack_150 = 0;
  local_c8 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
  lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_c8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,local_b8,
                     0x10);
  if (lVar4 != 0) {
    local_f0 = *local_148;
    do {
      local_110 = PTR_s_defaultManager_10088bfa0;
      local_108 = PTR_s_fileExistsAtPath_isDirectory__10088c2b8;
      local_e8 = PTR_s_fileURLWithPath_isDirectory__10088bf88;
      lVar8 = 0;
      local_100 = PTR_s_stringByAppendingPathComponent__10088bf80;
      do {
        puVar1 = local_100;
        if (*local_148 != local_f0) {
          _objc_enumerationMutation(local_c8);
        }
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(lStack_150 + lVar8 * 8),puVar1,local_d8);
        local_e0 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(local_e0,puVar1,local_f8);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_b9 = 0;
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSFileManager_10082c668,local_110);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_108,uVar3,&local_b9);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        if (cVar2 == '\x01') {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSURL_10082dfd8,local_e8,uVar3,1);
          lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
          if (lVar6 != 0) {
            FUN_1001a8bb0(local_d0,lVar6);
            (*(code *)PTR__objc_release_10082c7b0)(lVar6);
            (*(code *)PTR__objc_release_10082c7b0)(uVar3);
            (*(code *)PTR__objc_release_10082c7b0)(local_e0);
            (*(code *)PTR__objc_release_10082c7b0)(local_c8);
            goto LAB_1001ef888;
          }
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(local_e0);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (local_c8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_158,
                         local_b8,0x10);
    } while (lVar4 != 0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  FUN_1001aa318(local_d0);
LAB_1001ef888:
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  (*(code *)PTR__objc_release_10082c7b0)(local_d8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

