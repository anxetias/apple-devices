// name: FUN_1004545fc
// address: 1004545fc

undefined1  [16] FUN_1004545fc(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  puVar3 = PTR_s_compare__10088d300;
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 8);
  pcVar2 = (code *)PTR__objc_msgSend_10082c770;
  do {
    puVar7 = puVar8;
    PTR__objc_msgSend_10082c770 = pcVar2;
    if (puVar6 == (undefined8 *)0x0) goto LAB_10045475b;
    lVar4 = (*pcVar2)(param_2[1],puVar3,puVar6[5]);
    bVar5 = *param_2 < (ulong)puVar6[4];
    if (lVar4 != 0) {
      bVar5 = lVar4 == -1;
    }
    puVar7 = puVar6;
    if (!bVar5) {
      lVar4 = (*pcVar2)(puVar6[5],puVar3,param_2[1]);
      bVar5 = (ulong)puVar6[4] < *param_2;
      if (lVar4 != 0) {
        bVar5 = lVar4 == -1;
      }
      if (!bVar5) {
        pcVar2 = (code *)PTR__objc_msgSend_10082c770;
        for (puVar1 = (undefined8 *)*puVar6; PTR__objc_msgSend_10082c770 = pcVar2,
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[bVar5]) {
          lVar4 = (*pcVar2)(puVar1[5],puVar3,param_2[1]);
          bVar5 = (ulong)puVar1[4] < *param_2;
          if (lVar4 != 0) {
            bVar5 = lVar4 == -1;
          }
          if (bVar5 == false) {
            puVar7 = puVar1;
          }
          pcVar2 = (code *)PTR__objc_msgSend_10082c770;
        }
        for (puVar6 = (undefined8 *)puVar6[1]; puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)puVar6[bVar5 ^ 1]) {
          lVar4 = (*pcVar2)(param_2[1],PTR_s_compare__10088d300,puVar6[5]);
          bVar5 = *param_2 < (ulong)puVar6[4];
          if (lVar4 != 0) {
            bVar5 = lVar4 == -1;
          }
          if (bVar5 != false) {
            puVar8 = puVar6;
          }
        }
LAB_10045475b:
        auVar9._8_8_ = puVar8;
        auVar9._0_8_ = puVar7;
        return auVar9;
      }
      puVar6 = puVar6 + 1;
      puVar7 = puVar8;
    }
    puVar6 = (undefined8 *)*puVar6;
    puVar8 = puVar7;
    pcVar2 = (code *)PTR__objc_msgSend_10082c770;
  } while( true );
}

