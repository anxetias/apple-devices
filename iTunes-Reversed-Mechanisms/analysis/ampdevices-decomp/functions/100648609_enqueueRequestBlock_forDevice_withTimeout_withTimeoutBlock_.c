// name: enqueueRequestBlock:forDevice:withTimeout:withTimeoutBlock:
// address: 100648609

/* Function Stack Size: 0x30 bytes */

void AMPDevicesClientConnection::enqueueRequestBlock_forDevice_withTimeout_withTimeoutBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,double param_6,
               ID param_7,undefined4 param_8)

{
  void *pvVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined4 in_register_0000000c;
  long lVar10;
  size_t sVar11;
  undefined8 *puVar12;
  double dVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_48;
  undefined8 local_40;
  double local_38;
  
  puVar4 = PTR__objc_retain_10082c7b8;
  local_38 = param_6;
  uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_58 = (*(code *)puVar4)(CONCAT44(in_register_0000000c,param_4));
  local_48 = (*(code *)puVar4)(param_5);
  iVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,PTR_s_ensureFullService_10088dad8);
  if (iVar5 == 0) {
    local_50 = (undefined8 *)PTR__OBJC_CLASS___NSTimer_10082dfd0;
    local_c0 = PTR___NSConcreteStackBlock_10082caf0;
    local_b8 = 0xc2000000;
    local_b0 = FUN_100648983;
    local_a8 = &DAT_100871630;
    local_a0 = param_1;
    local_40 = uVar6;
    uVar6 = (*(code *)puVar4)(uVar6);
    local_90 = uVar6;
    uVar7 = (*(code *)puVar4)(local_58);
    local_98 = uVar7;
    local_88 = (*(code *)puVar4)(local_48);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_38,local_50,PTR_s_scheduledTimerWithTimeInterval_r_10088c508,0,
                       &local_c0);
    local_38 = (double)_objc_retainAutoreleasedReturnValue(uVar8);
    puVar12 = *(undefined8 **)(param_1 + 0x20);
    uVar7 = (*(code *)puVar4)(uVar7);
    local_80 = uVar7;
    uVar6 = _objc_retainBlock(uVar6);
    local_78 = uVar6;
    local_70 = (double)(*(code *)puVar4)(local_38);
    puVar15 = (undefined8 *)puVar12[1];
    if (puVar15 < (undefined8 *)puVar12[2]) {
      *puVar15 = uVar7;
      puVar15[1] = uVar6;
      puVar15[2] = local_70;
      puVar15 = puVar15 + 3;
      dVar13 = local_70;
    }
    else {
      pvVar1 = (void *)*puVar12;
      sVar11 = (long)puVar15 - (long)pvVar1;
      lVar14 = (long)sVar11 >> 3;
      uVar16 = lVar14 * -0x5555555555555555 + 1;
      local_68 = uVar7;
      local_60 = uVar6;
      if (0xaaaaaaaaaaaaaaa < uVar16) {
        FUN_100669c32();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = (long)puVar12[2] - (long)pvVar1 >> 3;
      uVar3 = lVar10 * 0x5555555555555556;
      if (uVar16 < uVar3) {
        uVar16 = uVar3;
      }
      if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar16 = 0xaaaaaaaaaaaaaaa;
      }
      local_50 = puVar12;
      local_38 = local_70;
      if (uVar16 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_1001082d0();
        }
        pvVar9 = operator_new(uVar16 * 0x18);
      }
      puVar12 = (undefined8 *)((long)pvVar9 + lVar14 * 8);
      *puVar12 = local_68;
      puVar12[1] = local_60;
      puVar12[2] = local_38;
      puVar15 = (undefined8 *)((long)pvVar9 + lVar14 * 8 + 0x18);
      _memcpy((void *)((long)puVar12 - sVar11),pvVar1,sVar11);
      *local_50 = (void *)((long)puVar12 - sVar11);
      local_50[1] = puVar15;
      local_50[2] = (void *)((long)pvVar9 + uVar16 * 0x18);
      puVar12 = local_50;
      dVar13 = local_38;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        puVar12 = local_50;
        dVar13 = local_38;
      }
    }
    uVar6 = local_40;
    lVar14 = local_48;
    puVar12[1] = puVar15;
    puVar4 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(0);
    (*(code *)puVar4)(0);
    (*(code *)puVar4)(0);
    (*(code *)puVar4)(dVar13);
    (*(code *)puVar4)(local_88);
    (*(code *)puVar4)(local_98);
    (*(code *)puVar4)(local_90);
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithOSStatus_fromErrorRepor_10088d950,iVar5,0x1068);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar14 = local_48;
    (**(code **)(local_48 + 0x10))(local_48,uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  puVar4 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar14);
  (*(code *)puVar4)(local_58);
  (*(code *)puVar4)(uVar6);
  return;
}

