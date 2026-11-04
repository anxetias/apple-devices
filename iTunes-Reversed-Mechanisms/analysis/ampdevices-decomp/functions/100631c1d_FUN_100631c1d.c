// name: FUN_100631c1d
// address: 100631c1d

void FUN_100631c1d(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  if (param_2 == 1) {
    if ((*(byte *)(*(long *)(param_1 + 0x30) + 4) & 1) == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_objectAtIndex__10088bf78,0);
      iVar4 = FUN_100170286(uVar6,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),0,0,0);
      if (iVar4 == 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      }
    }
    else {
      lVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_count_10088bdc0);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSMutableData_10082dfa8,PTR_s_dataWithCapacity__10088d938
                         ,lVar7 * 0x420);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar3 = PTR_s_appendBytes_length__10088d940;
      puVar2 = PTR_s_objectAtIndex__10088bf78;
      puVar1 = PTR__objc_msgSend_10082c770;
      if (lVar7 != 0) {
        lVar10 = 0;
        do {
          ___bzero(local_458,0x420);
          uVar8 = (*(code *)puVar1)(uVar5,puVar2,lVar10);
          iVar4 = FUN_100170286(uVar8,local_458,0,0,0);
          if (iVar4 == 0) {
            (*(code *)puVar1)(uVar6,puVar3,local_458);
          }
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
      }
      lVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_length_10088bdf0);
      if (lVar7 != 0) {
        uVar8 = FUN_1001c5bcd(lVar7);
        **(undefined8 **)(*(long *)(param_1 + 0x30) + 0x50) = uVar8;
        uVar8 = _objc_retainAutorelease(uVar6);
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_bytes_10088d918);
        uVar9 = FUN_1001c627e(**(undefined8 **)(*(long *)(param_1 + 0x30) + 0x50));
        FUN_1001c631b(uVar8,uVar9,lVar7);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  uVar6 = _CFRunLoopGetMain();
  _CFRunLoopWakeUp(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

