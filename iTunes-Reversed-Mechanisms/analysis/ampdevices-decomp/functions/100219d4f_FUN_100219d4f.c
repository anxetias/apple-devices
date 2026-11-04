// name: FUN_100219d4f
// address: 100219d4f

void FUN_100219d4f(void)

{
  uint uVar1;
  undefined8 *puVar2;
  SEL op;
  undefined *puVar3;
  undefined *op_00;
  undefined *puVar4;
  undefined *op_01;
  undefined *op_02;
  char cVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2da0 != 0) {
    uVar6 = _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_10082dfb8);
    op_02 = PTR_s_categoryWithIdentifier_actions_i_10088c310;
    op_01 = PTR_s_actionWithIdentifier_title_optio_10088c308;
    puVar4 = PTR_s_addObject__10088c218;
    op_00 = PTR_s_arrayWithObjects_count__10088bda0;
    op = PTR_s_stringWithFormat__10088c038;
    for (puVar2 = DAT_1008c7640; PTR_s_stringWithFormat__10088c038 = op, puVar2 != (undefined8 *)0x0
        ; puVar2 = (undefined8 *)*puVar2) {
      uVar1 = *(uint *)(puVar2 + 2);
      uVar15 = uVar1 >> 0x10 & 0xff;
      uVar14 = uVar1 >> 8 & 0xff;
      IVar7 = NSString::stringWithFormat_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,op,&cf__c_c_c_c_category,
                         (ulong)(uVar1 >> 0x18),(ulong)uVar15,(ulong)uVar14,uVar1 & 0xff);
      uVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
      IVar7 = NSString::stringWithFormat_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,op,&cf__c_c_c_c_action,
                         (ulong)(uVar1 >> 0x18),(ulong)uVar15,(ulong)uVar14,uVar1 & 0xff);
      uVar9 = _objc_retainAutoreleasedReturnValue(IVar7);
      uVar10 = FUN_1001bdcb0(puVar2 + 4,0);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      IVar7 = UNNotificationAction::actionWithIdentifier_title_options_
                        ((ID)PTR__OBJC_CLASS___UNNotificationAction_10082c3a8,op_01,uVar9,uVar10,0);
      uVar11 = _objc_retainAutoreleasedReturnValue(IVar7);
      puVar3 = PTR__OBJC_CLASS___UNNotificationCategory_10082c3b8;
      local_40 = uVar11;
      IVar7 = NSArray::arrayWithObjects_count_
                        ((ID)PTR__OBJC_CLASS___NSArray_10082df78,op_00,&local_40,1);
      uVar12 = _objc_retainAutoreleasedReturnValue(IVar7);
      IVar7 = UNNotificationCategory::categoryWithIdentifier_actions_intentIdentifiers_options_
                        ((ID)puVar3,op_02,uVar8,uVar12,PTR____NSArray0__struct_10082dfe8,0);
      uVar13 = _objc_retainAutoreleasedReturnValue(IVar7);
      (*(code *)PTR__objc_release_10082c7b0)(uVar12);
      if (DAT_1008c75d0 != -1) {
        _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
      }
      uVar12 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
      cVar5 = _os_log_type_enabled(uVar12,0);
      if (cVar5 != '\0') {
        local_58 = 0x8420202;
        local_4c = 0x842;
        local_54 = uVar8;
        local_4a = uVar9;
        __os_log_impl(0x100000000,uVar12,0,
                      "Registering for notification action \'%{public}@:%{public}@\'",&local_58,0x16
                     );
      }
      puVar3 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(uVar12);
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar4,uVar13);
      (*(code *)puVar3)(uVar13);
      (*(code *)puVar3)(uVar11);
      (*(code *)puVar3)(uVar10);
      (*(code *)puVar3)(uVar9);
      (*(code *)puVar3)(uVar8);
      op = PTR_s_stringWithFormat__10088c038;
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (DAT_1008a2da0,PTR_s_setNotificationCategories__10088c318,uVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

