// name: FUN_100662315
// address: 100662315

void FUN_100662315(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                     (*(undefined8 *)(param_1 + 0x20),PTR_s_remoteObjectProxy_10088de20);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  FUN_100501b16(&local_78);
  puVar10 = PTR_s_didStartSoftwareDownloadForDevic_10088de68;
  puVar9 = PTR_s_didStartSoftwareUpdateRestoreFor_10088de60;
  puVar8 = PTR_s_didStartManualSoftwareUpdateChec_10088de58;
  puVar7 = PTR_s_didStartRestoreFromBackupForDevi_10088de50;
  puVar6 = PTR_s_didStartEraseForDeviceWithIdenti_10088de48;
  puVar5 = PTR_s_didStartBackupForDeviceWithIdent_10088de40;
  puVar4 = PTR_s_didStartSyncForDeviceWithIdentif_10088de30;
  puVar3 = PTR_s_didChangeSyncAllowedState_forDev_10088de28;
  if (local_78 != local_70) {
    local_60 = PTR_s_didChangeSyncErrorState_forDevic_10088de38;
    puVar17 = local_78;
    do {
      uVar1 = *puVar17;
      uVar13 = FUN_1004de449(uVar1);
      lVar14 = FUN_100501f71(uVar13);
      if (lVar14 == 0) {
        uVar13 = FUN_1001cc310();
        uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
        cVar11 = _os_log_type_enabled(uVar13,0x10);
        if (cVar11 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x51a0;
          uStack_48 = 0x1007a;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar13);
        FUN_1001782e9(0,0);
      }
      else {
        lVar15 = FUN_1004de449(uVar1);
        if (((lVar15 != 0) && (cVar11 = FUN_1004e7efc(lVar15), cVar11 != '\0')) &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,puVar3), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar3,1,lVar14);
        }
        lVar15 = FUN_1004de449(uVar1);
        if (((lVar15 != 0) &&
            ((*(char *)(lVar15 + 0x6acf) != '\0' || (*(int *)(lVar15 + 0x6b0c) != 0)))) &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,puVar4), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar4,lVar14);
        }
        uVar13 = FUN_1004de449(uVar1);
        cVar11 = FUN_1005c9e10(uVar13);
        if ((cVar11 != '\0') &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,local_60), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,local_60,1,lVar14);
        }
        cVar11 = FUN_1005044f5(uVar1);
        if ((cVar11 != '\0') &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,puVar5), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar5,lVar14);
        }
        cVar11 = FUN_1005045ac(uVar1);
        if ((cVar11 != '\0') &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,puVar6), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar6,lVar14);
        }
        cVar11 = FUN_100504663(uVar1);
        if ((cVar11 != '\0') &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,puVar7), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar7,lVar14);
        }
        cVar11 = FUN_10039e16c(uVar1);
        if (cVar11 == '\0') {
          cVar11 = FUN_10039e077(uVar1,1,0);
          if (cVar11 == '\0') {
            cVar11 = FUN_10039e077(uVar1,1,1);
            if (cVar11 == '\0') goto LAB_100662614;
            cVar11 = _objc_opt_respondsToSelector(uVar12,puVar10);
            puVar16 = puVar10;
          }
          else {
            cVar11 = _objc_opt_respondsToSelector(uVar12,puVar9);
            puVar16 = puVar9;
          }
        }
        else {
          cVar11 = _objc_opt_respondsToSelector(uVar12,puVar8);
          puVar16 = puVar8;
        }
        if (cVar11 != '\0') {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,puVar16,lVar14);
        }
      }
LAB_100662614:
      (*(code *)PTR__objc_release_10082c7b0)(lVar14);
      puVar17 = puVar17 + 1;
    } while (puVar17 != local_70);
  }
  uVar13 = FUN_1005e9a2c();
  FUN_1005e76fc(&local_58,uVar13);
  if (local_78 != (undefined4 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  puVar17 = (undefined4 *)CONCAT44(uStack_54,local_58);
  puVar2 = (undefined4 *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
  uStack_64 = CONCAT22(uStack_42,uStack_44);
  local_70 = (undefined4 *)CONCAT44(CONCAT22(uStack_4a,uStack_4c),local_50);
  uStack_68 = uStack_48;
  local_78 = puVar17;
  if (puVar17 != puVar2) {
    local_60 = PTR_s_didStartSoftwareUpdateRestoreFor_10088de60;
    do {
      uVar1 = *puVar17;
      uVar13 = FUN_1005e9a2c();
      lVar14 = FUN_1005e7932(uVar13,uVar1);
      if (lVar14 == 0) {
        uVar13 = FUN_1001cc310();
        uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
        cVar11 = _os_log_type_enabled(uVar13,0x10);
        if (cVar11 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x51a0;
          uStack_48 = 0x1007a;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar13);
        FUN_1001782e9(0,0);
      }
      else {
        cVar11 = FUN_10039e077(uVar1,1,0);
        if ((cVar11 != '\0') &&
           (cVar11 = _objc_opt_respondsToSelector(uVar12,local_60), cVar11 != '\0')) {
          (*(code *)PTR__objc_msgSend_10082c770)(uVar12,local_60,lVar14);
        }
      }
      (*(code *)PTR__objc_release_10082c7b0)(lVar14);
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar2);
  }
  if (local_78 != (undefined4 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar12);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

