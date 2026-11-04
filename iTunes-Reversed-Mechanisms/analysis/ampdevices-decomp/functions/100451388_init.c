// name: init
// address: 100451388

/* Function Stack Size: 0x10 bytes */

ID MediaLibraryObserver::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *op;
  char cVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ID self;
  undefined8 uVar6;
  ID local_68;
  undefined *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = PTR_MediaLibraryObserver_100885700;
  local_68 = param_1;
  IVar3 = NSObject::init((ID)&local_68,PTR_s_init_10088c4d0);
  if (IVar3 != 0) {
    lVar4 = _objc_alloc(PTR__OBJC_CLASS___MLMediaLibrary_10082bc88);
    *(long *)(IVar3 + 8) = lVar4;
    if (lVar4 == 0) {
LAB_100451501:
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "mMLMediaLibrary != nullptr";
LAB_1004515c7:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    else {
      IVar5 = NSMutableArray::array
                        ((ID)PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
      puVar1 = PTR__objc_msgSend_10082c770;
      if (IVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_4a = "sourcesArray != nullptr";
          goto LAB_1004515c7;
        }
      }
      else {
        NSMutableArray::addObject_(IVar5,PTR_s_addObject__10088c218,&cf_com_apple_Photos);
        self = NSMutableDictionary::dictionary
                         ((ID)PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,
                          PTR_s_dictionary_10088c4a0);
        op = PTR_s_setObject_forKey__10088c000;
        if (self == 0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = "optionsDictionary != nullptr";
            goto LAB_1004515c7;
          }
        }
        else {
          NSMutableDictionary::setObject_forKey_
                    (self,PTR_s_setObject_forKey__10088c000,IVar5,&cf_MLMediaLoadIncludeSources);
          IVar5 = NSNumber::numberWithInt_
                            ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithInt__10088c3d0
                             ,1);
          NSMutableDictionary::setObject_forKey_(self,op,IVar5,&cf_iTunesPhotoSyncMode);
          lVar4 = (*(code *)puVar1)(*(undefined8 *)(IVar3 + 8),PTR_s_initWithOptions__10088d268,self
                                   );
          *(long *)(IVar3 + 8) = lVar4;
          if (lVar4 == 0) goto LAB_100451501;
          lVar4 = _objc_alloc_init(PTR__OBJC_CLASS___NSCondition_10082c650);
          *(long *)(IVar3 + 0x30) = lVar4;
          if (lVar4 != 0) goto LAB_100451600;
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = "mKVOCondition != nullptr";
            goto LAB_1004515c7;
          }
        }
      }
    }
    FUN_1001782e9(0,0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(IVar3);
  IVar3 = 0;
LAB_100451600:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

