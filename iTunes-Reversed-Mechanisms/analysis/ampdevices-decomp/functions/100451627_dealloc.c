// name: dealloc
// address: 100451627

/* Function Stack Size: 0x10 bytes */

void MediaLibraryObserver::dealloc(ID param_1,SEL param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  ID local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  ID local_38;
  
  puVar3 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  (*(code *)puVar3)(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar7 = *(long **)(param_1 + 0x38);
  local_38 = param_1;
  if (plVar7 != (long *)(param_1 + 0x40)) {
    local_40 = PTR_s_removeObserver_forKeyPath_contex_10088d270;
    do {
      puVar3 = PTR__objc_retain_10082c7b8;
      pcVar1 = (char *)plVar7[6];
      if (*pcVar1 == '\x01') {
        uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(plVar7[4]);
        local_50 = uVar5;
        local_48 = (*(code *)puVar3)(plVar7[5]);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_40,local_38,local_48,local_38);
        plVar2 = *(long **)(pcVar1 + 0x30);
        if (plVar2 == (long *)(pcVar1 + 0x10)) {
          lVar6 = 0x20;
LAB_1004516dd:
          (**(code **)(*plVar2 + lVar6))();
        }
        else {
          lVar6 = 0x28;
          if (plVar2 != (long *)0x0) goto LAB_1004516dd;
        }
        operator_delete(pcVar1);
        FUN_100453b6a(&local_50);
      }
      plVar2 = (long *)plVar7[1];
      plVar8 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar9 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar9);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != (long *)(param_1 + 0x40));
  }
  IVar4 = local_38;
  (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(local_38 + 8));
  *(undefined8 *)(IVar4 + 8) = 0;
  local_60 = IVar4;
  local_58 = PTR_MediaLibraryObserver_100885700;
  NSObject::dealloc((ID)&local_60,PTR_s_dealloc_10088c4f0);
  return;
}

