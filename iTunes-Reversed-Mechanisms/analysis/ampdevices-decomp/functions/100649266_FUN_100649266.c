// name: FUN_100649266
// address: 100649266

void FUN_100649266(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  
  plVar3 = (long *)(*(code *)PTR__objc_msgSend_10082c770)
                             (*(undefined8 *)(param_1 + 0x20),PTR_s_pendingRequestQueue_10088dae0);
  puVar1 = PTR_s_invalidate_10088c4e8;
  puVar9 = (undefined8 *)*plVar3;
  puVar7 = PTR_s_objectIDForDevice_onlyBootedOSMo_10088dac0;
  pcVar8 = (code *)PTR__objc_msgSend_10082c770;
  if (puVar9 != (undefined8 *)plVar3[1]) {
    do {
      iVar2 = (*pcVar8)(*(undefined8 *)(param_1 + 0x20),puVar7,*puVar9,0,1);
      if (iVar2 == *(int *)(param_1 + 0x28)) {
        (*pcVar8)(puVar9[2],puVar1);
        lVar4 = _objc_retainBlock(puVar9[1]);
        lVar5 = FUN_100669bb8(puVar9 + 3,plVar3[1],puVar9);
        lVar6 = plVar3[1];
        while (lVar6 != lVar5) {
          lVar6 = lVar6 + -0x18;
          FUN_100648c92(lVar6);
        }
        plVar3[1] = lVar5;
        (**(code **)(lVar4 + 0x10))(lVar4,*(undefined4 *)(param_1 + 0x28));
        (*(code *)PTR__objc_release_10082c7b0)(lVar4);
        puVar7 = PTR_s_objectIDForDevice_onlyBootedOSMo_10088dac0;
        pcVar8 = (code *)PTR__objc_msgSend_10082c770;
      }
      else {
        puVar9 = puVar9 + 3;
      }
    } while (puVar9 != (undefined8 *)plVar3[1]);
  }
  return;
}

