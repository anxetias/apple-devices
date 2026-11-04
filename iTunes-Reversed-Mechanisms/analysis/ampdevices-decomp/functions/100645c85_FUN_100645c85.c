// name: FUN_100645c85
// address: 100645c85

void FUN_100645c85(int param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined *local_67b0;
  undefined8 local_67a8;
  code *local_67a0;
  undefined *local_6798;
  undefined8 local_6790;
  undefined8 local_6788;
  long lStack_6780;
  long *local_6778;
  undefined8 uStack_6770;
  undefined8 local_6768;
  undefined8 uStack_6760;
  undefined8 local_6758;
  undefined8 uStack_6750;
  long local_6740;
  undefined2 local_6738;
  undefined2 uStack_6736;
  undefined4 uStack_6734;
  undefined8 local_6728;
  long local_6720;
  undefined1 local_6718 [128];
  undefined4 local_6698;
  undefined4 uStack_6694;
  undefined4 uStack_6690;
  undefined2 uStack_668c;
  undefined2 uStack_668a;
  undefined2 uStack_6688;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100645c9d;
  auVar18 = FUN_100108310();
  puVar2 = PTR__objc_msgSend_10082c770;
  uVar16 = auVar18._8_8_;
  lVar3 = -auVar18._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar7 = (int)param_4;
  cVar6 = auVar18[8];
  if (param_1 < 0x69707072) {
    if (param_1 < 0x69706468) {
      if (param_1 < 0x69706269) {
        if (0x69706172 < param_1) {
          if (param_1 == 0x69706173) {
            if (iVar7 == 0) {
              uVar15 = 0;
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646745;
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                                (PTR__OBJC_CLASS___NSError_10082c660,
                                 PTR_s_errorWithActivationError_forObje_10088dcb0,
                                 param_4 & 0xffffffff,param_2 & 0xffffffff);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064674d;
              uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
            }
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470d3;
            uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(uVar16);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470ea;
            uVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                               (&objc::class_t::AMPDevicesClientBroadcaster,
                                PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470f2;
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064710b;
            uVar14 = (*(code *)PTR__objc_msgSend_10082c770)
                               (&objc::class_t::AMPDevicesClientConnection,
                                PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,
                                param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647113;
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064712f;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar13,PTR_s_requestCompleteWithActivationInf_10088de80,uVar9,uVar14,uVar15);
            pcVar11 = (code *)PTR__objc_release_10082c7b0;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064713b;
            (*(code *)PTR__objc_release_10082c7b0)(uVar14);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647140;
            (*pcVar11)(uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647148;
            (*pcVar11)(uVar9);
            if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) goto LAB_100647708;
            goto LAB_100646d0c;
          }
          if (param_1 == 0x69706263) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646aea;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientConnection,
                               PTR_s_batteryInfoForObjectID__10088dd68,param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646af2;
            lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
            if (lVar10 != 0) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b0e;
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                                (&objc::class_t::AMPDevicesClientBroadcaster,
                                 PTR_s_sharedInstance_10088c4b8);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b16;
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b2f;
              uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                                 (&objc::class_t::AMPDevicesClientConnection,
                                  PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,
                                  param_2 & 0xffffffff);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b37;
              uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b50;
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar9,PTR_s_didChangeBatteryInfo_forDeviceWi_10088dea0,lVar10,uVar15);
              puVar2 = PTR__objc_release_10082c7b0;
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b5c;
              (*(code *)PTR__objc_release_10082c7b0)(uVar15);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b61;
              (*(code *)puVar2)(uVar9);
            }
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) goto LAB_100647206;
            goto LAB_100647708;
          }
          if (param_1 != 0x69706266) goto switchD_100645d94_caseD_69707371;
LAB_100645ff4:
          if (auVar18._8_4_ == 0) {
            if (iVar7 != 0) {
              ppuVar8 = &PTR_s_errorWithRestoreError_forObjectI_10088df90;
              if (param_1 == 0x69706266) {
                ppuVar8 = &PTR_s_errorWithBackupError_forObjectID_10088df88;
              }
              uVar16 = param_4 & 0xffffffff;
              goto LAB_1006465bd;
            }
            lVar10 = 0;
          }
          else {
            ppuVar8 = &PTR_s_errorWithOSStatus_forObjectID__10088d960;
LAB_1006465bd:
            puVar2 = *ppuVar8;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006465d5;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (PTR__OBJC_CLASS___NSError_10082c660,puVar2,uVar16 & 0xffffffff,
                               param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006465dd;
            lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006465f9;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_notifyBackupRestoreCompletedForO_10088df98,param_2 & 0xffffffff,lVar10);
          if (param_1 == 0x69707266) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ecc;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ed4;
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ef4;
            local_6720 = lVar10;
            uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                               (&objc::class_t::AMPDevicesClientConnection,
                                PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,
                                param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646efc;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f15;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar9,PTR_s_didCompleteRestoreFromBackupForD_10088ded0,uVar15,lVar10);
LAB_100646f15:
            puVar2 = PTR__objc_release_10082c7b0;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f25;
            (*(code *)PTR__objc_release_10082c7b0)(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f2b;
            (*(code *)puVar2)(uVar9);
            lVar10 = local_6720;
          }
          else {
            if (param_1 == 0x69706566) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646e6d;
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                                (&objc::class_t::AMPDevicesClientBroadcaster,
                                 PTR_s_sharedInstance_10088c4b8);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646e75;
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646e95;
              local_6720 = lVar10;
              uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                                 (&objc::class_t::AMPDevicesClientConnection,
                                  PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,
                                  param_2 & 0xffffffff);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646e9d;
              uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646eb6;
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar9,PTR_s_didCompleteEraseForDeviceWithIde_10088dec8,uVar15,lVar10);
              goto LAB_100646f15;
            }
            if (param_1 == 0x69706266) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646634;
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                                (&objc::class_t::AMPDevicesClientBroadcaster,
                                 PTR_s_sharedInstance_10088c4b8);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064663c;
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064665c;
              local_6720 = lVar10;
              uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                                 (&objc::class_t::AMPDevicesClientConnection,
                                  PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,
                                  param_2 & 0xffffffff);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646664;
              uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064667d;
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar9,PTR_s_didCompleteBackupForDeviceWithId_10088dec0,uVar15,lVar10);
              goto LAB_100646f15;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f3b;
          (*(code *)PTR__objc_release_10082c7b0)(lVar10);
          goto LAB_10064749e;
        }
        if (param_1 == 0x65727573) {
          if (auVar18._8_4_ == 0) {
            lVar10 = 0;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a6c;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (PTR__OBJC_CLASS___NSError_10082c660,
                               PTR_s_errorWithOSStatus__10088d958,uVar16 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a74;
            lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
          }
          if ((char)param_4 == '\0') {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647249;
            local_6720 = lVar10;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,
                       PTR_s_notifySoftwareUpdateRestoreCompl_10088dfb0,param_2 & 0xffffffff,lVar10)
            ;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064725d;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647265;
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064727e;
            uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,
                                PTR_s_numberWithUnsignedInt__10088be18,param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647286;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647299;
            uVar13 = (*(code *)PTR__objc_msgSend_10082c770)(uVar15,PTR_s_stringValue_10088dfb8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006472a1;
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006472ba;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar9,PTR_s_didCompleteSoftwareUpdateRestore_10088df08,uVar13,lVar10);
            puVar2 = PTR__objc_release_10082c7b0;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006472c7;
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006472cd;
            (*(code *)puVar2)(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006472d3;
            (*(code *)puVar2)(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006472df;
            FUN_10025b7fa(&local_6698);
            lVar10 = CONCAT44(uStack_6694,local_6698);
            if ((lVar10 != 0) && (*(char *)(lVar10 + 0x70) == '\x05')) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100647308;
              uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                                (&objc::class_t::AMPDevicesClientConnection,
                                 PTR_s_softwareUpdateRestoreDeviceIdent_10088df10,
                                 param_2 & 0xffffffff);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100647310;
              uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064731e;
              FUN_1004d8782(lVar10,uVar9);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100647327;
              (*(code *)PTR__objc_release_10082c7b0)(uVar9);
            }
            lVar10 = local_6720;
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647344;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,
                       PTR_s_removeSoftwareUpdateRestoreDevic_10088dfc0,param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647350;
            FUN_100205d70(&local_6698);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100647359;
          (*(code *)PTR__objc_release_10082c7b0)(lVar10);
          goto LAB_1006474ce;
        }
        if (param_1 == 0x69706163) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064631a;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646322;
          local_6790 = _objc_retainAutoreleasedReturnValue(uVar9);
          puVar2 = PTR_s_fetchFileSharingAppsForDeviceWit_10088dd78;
          local_67b0 = PTR___NSConcreteStackBlock_10082caf0;
          local_67a8 = 0xc2000000;
          local_67a0 = FUN_100669b0b;
          local_6798 = &DAT_100871bc0;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064636d;
          uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(local_6790);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646382;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,puVar2,uVar9,&local_67b0);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064638f;
          (*(code *)PTR__objc_release_10082c7b0)(local_6790);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646398;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
      else {
        if (param_1 < 0x69706378) {
          if (param_1 == 0x69706269) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006469a2;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006469aa;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006469c3;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientConnection,
                               PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff
                              );
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006469cb;
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006469e1;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar15,PTR_s_didChangeBackupInfoForDeviceWith_10088deb0,uVar9);
          }
          else {
            if (param_1 != 0x69706273) {
              if (param_1 == 0x69706372) goto LAB_100647637;
              goto switchD_100645d94_caseD_69707371;
            }
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c4f;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c57;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c70;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientConnection,
                               PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff
                              );
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c78;
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c8e;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar15,PTR_s_didStartBackupForDeviceWithIdent_10088de40,uVar9);
          }
LAB_100646ced:
          pcVar11 = (code *)PTR__objc_release_10082c7b0;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646cf2;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
          goto LAB_100646cf2;
        }
        if (param_1 == 0x69706378) goto switchD_100645d94_caseD_69707378;
        if (param_1 == 0x69706461) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646d2b;
          FUN_10025b7fa(&local_6698);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646d3e;
          FUN_10046a0b6(CONCAT44(uStack_6694,local_6698),"device added");
          plVar4 = (long *)CONCAT26(uStack_668a,CONCAT24(uStack_668c,uStack_6690));
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar10 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              pcVar11 = *(code **)(*plVar4 + 0x10);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646d6d;
              (*pcVar11)(plVar4);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646d75;
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        else if (param_1 == 0x69706463) goto LAB_100646115;
      }
    }
    else if (param_1 < 0x69706572) {
      if (param_1 < 0x69706472) {
        if (param_1 == 0x69706468) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a90;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientBroadcaster,
                             PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a98;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ab1;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ab9;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646acf;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didHideDeviceWithIdentifier__10088dee8,uVar9);
          goto LAB_100646ced;
        }
        if (param_1 == 0x6970646d) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006463c5;
          FUN_1005022bb(&local_6698,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006463d3;
          uVar9 = FUN_1001bdcb0(&local_6698,0);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006463db;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006463ea;
          FUN_1001b7a50(&local_6698);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006463fe;
          uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientBroadcaster,
                              PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646406;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064641f;
          uVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientConnection,
                              PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff)
          ;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646427;
          uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646440;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didChangeDeviceName_forDeviceWit_10088de88,uVar9,uVar13);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646449;
          (*(code *)PTR__objc_release_10082c7b0)(uVar13);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646452;
          (*(code *)PTR__objc_release_10082c7b0)(uVar15);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064645b;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
      else {
        if (param_1 == 0x69706472) {
LAB_100646460:
          if ((int)param_2 == 0) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f49;
            lVar10 = (*(code *)PTR__objc_retain_10082c7b8)(uVar16);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064647e;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientConnection,
                               PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff
                              );
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646486;
            lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f51;
          uVar9 = FUN_100642e20();
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f59;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646f69;
          cVar6 = _os_log_type_enabled(uVar9,1);
          if (cVar6 != '\0') {
            local_6698 = 0x8420102;
            uStack_6694 = (undefined4)lVar10;
            uStack_6690 = (undefined4)((ulong)lVar10 >> 0x20);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646fa0;
            __os_log_impl(0x100000000,uVar9,1,"device removed: %{public}@",&local_6698,0xc);
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646fa9;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
          if (lVar10 == 0) {
LAB_1006473aa:
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006473b6;
            FUN_10025b7fa(&local_6698);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006473c9;
            FUN_100469b0a(CONCAT44(uStack_6694,local_6698),"device removed; no recovery device");
            plVar4 = (long *)CONCAT26(uStack_668a,CONCAT24(uStack_668c,uStack_6690));
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                pcVar11 = *(code **)(*plVar4 + 0x10);
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1006473f2;
                (*pcVar11)(plVar4);
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1006473fa;
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          else {
            if (param_1 == 0x69706472) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646fc0;
              uVar9 = FUN_1005e9a2c();
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100646fcb;
              lVar12 = FUN_1005e754a(uVar9,lVar10);
              if (lVar12 == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(lVar12 + 0x6884);
              }
              bVar17 = iVar7 != 0;
            }
            else {
              bVar17 = false;
            }
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064737a;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100647382;
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064739c;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar9,PTR_s_didRemoveDeviceWithIdentifier_ha_10088def0,lVar10,bVar17);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006473a5;
            (*(code *)PTR__objc_release_10082c7b0)(uVar9);
            if (bVar17 == false) goto LAB_1006473aa;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100647403;
          (*(code *)PTR__objc_release_10082c7b0)(lVar10);
          goto LAB_10064749e;
        }
        if (param_1 == 0x69706474) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b84;
          uVar9 = FUN_100502206(param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646b97;
          iVar7 = FUN_1003185d5(uVar9,0,&local_6698,0);
          if (iVar7 == 0) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646bb3;
            uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646bbb;
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646bd9;
            uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                               (&objc::class_t::AMPDevicesClientConnection,
                                PTR_s_totalsForDeviceTotals__10088dbf8,&local_6698);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646be1;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646bfa;
            uVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                               (&objc::class_t::AMPDevicesClientConnection,
                                PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,
                                param_2 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c02;
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c1b;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar9,PTR_s_didChangeDeviceTotals_forDeviceW_10088dea8,uVar15,uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c24;
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c2d;
            (*(code *)PTR__objc_release_10082c7b0)(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x100646c36;
            (*(code *)PTR__objc_release_10082c7b0)(uVar9);
          }
        }
        else if (param_1 == 0x69706566) goto LAB_100645ff4;
      }
    }
    else {
      if (param_1 < 0x69706d64) {
        if (param_1 == 0x69706572) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006469fa;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientBroadcaster,
                             PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a02;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a1b;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a23;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646a3d;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didChangeSyncErrorState_forDevic_10088de38,(int)cVar6,uVar9);
        }
        else {
          if (param_1 != 0x69706573) {
            if (param_1 == 0x69706c70) goto LAB_100646115;
            goto switchD_100645d94_caseD_69707371;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ca4;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientBroadcaster,
                             PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646cac;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646cc5;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ccd;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646ce3;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didStartEraseForDeviceWithIdenti_10088de48,uVar9);
        }
        goto LAB_100646ced;
      }
      if (param_1 == 0x69706d64) goto LAB_100647637;
      if ((param_1 == 0x69706f61) || (param_1 == 0x69707070)) {
LAB_100646115:
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646129;
        ___bzero(&local_6698,0x6660);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646136;
        iVar7 = FUN_1005027ed(param_2 & 0xffffffff,&local_6698);
        if (iVar7 == 0) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064614d;
          uVar9 = _objc_alloc(PTR__OBJC_CLASS___AMPDeviceInfo_10082b9b0);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646167;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (uVar9,PTR_s_initWithIPodDeviceInfo__10088db40,&local_6698);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646181;
          uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientBroadcaster,
                              PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646189;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006461a2;
          uVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientConnection,
                              PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff)
          ;
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006461aa;
          uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006461c3;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didChangeDeviceInfo_forDeviceWit_10088de90,uVar9,uVar13);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006461cc;
          (*(code *)PTR__objc_release_10082c7b0)(uVar13);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006461d5;
          (*(code *)PTR__objc_release_10082c7b0)(uVar15);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006461de;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        goto LAB_10064749e;
      }
    }
    goto switchD_100645d94_caseD_69707371;
  }
  if (0x6d647570 < param_1) {
    if (0x73757272 < param_1) {
      if (0x73776464 < param_1) {
        if (param_1 == 0x73776465) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006466cc;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_didCompleteSoftwareDownloadForOb_10088dfa0,uVar16 & 0xffffffff,0,
                     (int)(char)param_2);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006466dc;
          uVar9 = (*(code *)puVar2)(&objc::class_t::AMPDevicesClientBroadcaster,
                                    PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006466e4;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006466fe;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,uVar16 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646706;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064671e;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didCompleteSoftwareDownloadForDe_10088df00,uVar9,0);
        }
        else {
          if (param_1 != 0x73776473) {
            if (param_1 == 0x77786d6c) goto LAB_1006474ce;
            goto switchD_100645d94_caseD_69707371;
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646938;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientBroadcaster,
                             PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646940;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064695a;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,uVar16 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646962;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646978;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didStartSoftwareDownloadForDevic_10088de68,uVar9);
        }
        puVar2 = PTR__objc_release_10082c7b0;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646984;
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646989;
        (*(code *)puVar2)(uVar15);
        goto LAB_1006474ce;
      }
      if (param_1 == 0x73757273) goto LAB_1006474ce;
      if (param_1 == 0x73776365) {
        if (iVar7 == 0) {
          local_6720 = 0;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064680f;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                             param_4 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646817;
          local_6720 = _objc_retainAutoreleasedReturnValue(uVar9);
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100647186;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientBroadcaster,
                           PTR_s_sharedInstance_10088c4b8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10064718e;
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006471a7;
        uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                           (&objc::class_t::AMPDevicesClientConnection,
                            PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006471af;
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006471cc;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar9,PTR_s_didCompleteManualSoftwareUpdateC_10088def8,uVar15,local_6720);
        puVar2 = PTR__objc_release_10082c7b0;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006471d9;
        (*(code *)PTR__objc_release_10082c7b0)(uVar15);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006471df;
        (*(code *)puVar2)(uVar9);
        if (cVar6 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006471eb;
          FUN_1004ffb9b(param_2 & 0xffffffff);
        }
        lVar10 = local_6720;
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
LAB_100647206:
          (*(code *)PTR__objc_release_10082c7b0)(lVar10);
          return;
        }
        goto LAB_100647708;
      }
      if (param_1 == 0x73776373) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645f1e;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientBroadcaster,
                           PTR_s_sharedInstance_10088c4b8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645f26;
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645f40;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientConnection,
                           PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,uVar16 & 0xffffffff);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645f48;
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645f5e;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar15,PTR_s_didStartManualSoftwareUpdateChec_10088de58,uVar9);
        goto LAB_100646ced;
      }
      goto switchD_100645d94_caseD_69707371;
    }
    if (0x73757062 < param_1) {
      if (param_1 == 0x73757063) goto LAB_1006474ce;
      if (param_1 == 0x73757261) {
        if (cVar6 == '\0') {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646842;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064684a;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646866;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_addSoftwareUpdateRestoreDeviceId_10088dfa8,uVar9,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064687a;
          uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientBroadcaster,
                              PTR_s_sharedInstance_10088c4b8);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646882;
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646898;
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar15,PTR_s_didStartSoftwareUpdateRestoreFor_10088de60,uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468a1;
          (*(code *)PTR__objc_release_10082c7b0)(uVar15);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468ad;
          FUN_10025b7fa(&local_6738);
          lVar10 = CONCAT44(uStack_6734,CONCAT22(uStack_6736,local_6738));
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x70) == '\x05')) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468c7;
            FUN_1004d83ae(lVar10,uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468d1;
            iVar7 = FUN_100194730(uVar9,0);
            if ((iVar7 != -0x80) && (iVar7 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468e1;
              uVar15 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468e9;
              uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1006468f9;
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              if (cVar6 != '\0') {
                local_6698 = 0x8220202;
                uStack_6694 = 0x7a0a90;
                uStack_6690 = 1;
                uStack_668c = 0x400;
                uStack_668a = (undefined2)iVar7;
                uStack_6688 = (undefined2)((uint)iVar7 >> 0x10);
                *(undefined8 *)((long)&local_38 + lVar3) = 0x100647703;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_6698,
                                    0x12);
              }
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064690a;
              (*(code *)PTR__objc_release_10082c7b0)(uVar15);
            }
          }
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646916;
          FUN_100205d70(&local_6738);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064691f;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
      else if ((param_1 == 0x7375726d) && ((char)param_4 == '\0')) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646045;
        FUN_10025b7fa(&local_6698);
        lVar10 = CONCAT44(uStack_6694,local_6698);
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0x70) == '\x05')) {
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064606e;
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_softwareUpdateRestoreDeviceIdent_10088df10,param_2 & 0xffffffff);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646076;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x100646084;
          FUN_1004d8598(lVar10,uVar9);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x10064608d;
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646099;
        FUN_100205d70(&local_6698);
      }
      goto switchD_100645d94_caseD_69707371;
    }
    if (param_1 != 0x6d647571) {
      if (param_1 == 0x72697061) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646761;
        FUN_10025b7fa(&local_6698);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646774;
        FUN_10046a0b6(CONCAT44(uStack_6694,local_6698),"raw device added");
        plVar4 = (long *)CONCAT26(uStack_668a,CONCAT24(uStack_668c,uStack_6690));
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar10 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            pcVar11 = *(code **)(*plVar4 + 0x10);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10064679b;
            (*pcVar11)(plVar4);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006467a3;
            std::__shared_weak_count::__release_weak();
          }
        }
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006467ea;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (&objc::class_t::AMPDevicesClientConnection,
                   PTR_s_performBlockForEachClientConnect_10088df58);
      }
      else if (param_1 == 0x72697072) goto LAB_100646460;
      goto switchD_100645d94_caseD_69707371;
    }
    goto LAB_1006474ce;
  }
  if (param_1 < 0x69707369) {
    if (0x69707272 < param_1) {
      if (param_1 == 0x69707273) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646554;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientBroadcaster,
                           PTR_s_sharedInstance_10088c4b8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10064655c;
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646575;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientConnection,
                           PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10064657d;
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646593;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar15,PTR_s_didStartRestoreFromBackupForDevi_10088de50,uVar9);
      }
      else {
        if (param_1 != 0x69707361) goto switchD_100645d94_caseD_69707371;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646211;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientBroadcaster,
                           PTR_s_sharedInstance_10088c4b8);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646219;
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646232;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientConnection,
                           PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10064623a;
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100646254;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar15,PTR_s_didChangeSyncAllowedState_forDev_10088de28,(int)cVar6,uVar9);
      }
      goto LAB_100646ced;
    }
    if (param_1 == 0x69707072) goto switchD_100645d94_caseD_69707372;
    if (param_1 == 0x69707266) goto LAB_100645ff4;
    goto switchD_100645d94_caseD_69707371;
  }
  switch(param_1) {
  case 0x69707370:
    local_6738 = (undefined2)param_2;
    uStack_6736 = (undefined2)(param_2 >> 0x10);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100645dbc;
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_updateSyncProgressForObjectID_wi_10088df70,param_2 & 0xffffffff,uVar16,
               param_4 & 0xffffffff);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100645dcf;
    cVar6 = (*(code *)puVar2)(&objc::class_t::AMPDevicesClientConnection,
                              PTR_s_shouldStopSyncForObjectID__10088df78,param_2 & 0xffffffff);
    if (cVar6 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100645ddc;
      uVar9 = FUN_100642e20();
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100645de4;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100645df4;
      cVar6 = _os_log_type_enabled(uVar9,1);
      if (cVar6 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e0e;
        uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                           (&objc::class_t::AMPDevicesClientConnection,
                            PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e16;
        uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
        local_6698 = 0x8420102;
        uStack_6694 = (undefined4)uVar15;
        uStack_6690 = (undefined4)((ulong)uVar15 >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e4c;
        __os_log_impl(0x100000000,uVar9,1,"stopping sync for device %{public}@",&local_6698,0xc);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e55;
        (*(code *)PTR__objc_release_10082c7b0)(uVar15);
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e5e;
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e71;
      FUN_10051d103(FUN_1004e368f,&local_6738);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100645e8b;
      (*(code *)PTR__objc_msgSend_10082c770)
                (&objc::class_t::AMPDevicesClientConnection,PTR_s_didStopSyncForObjectID__10088df80,
                 CONCAT22(uStack_6736,local_6738));
    }
    break;
  case 0x69707371:
  case 0x69707373:
  case 0x69707374:
  case 0x69707376:
    break;
  case 0x69707372:
switchD_100645d94_caseD_69707372:
    local_6698 = 0;
    uStack_6694 = 0;
    *(undefined8 *)((long)&local_38 + lVar3) = 0x10064626e;
    lVar10 = FUN_1004de449(param_2 & 0xffffffff);
    if ((lVar10 == 0) || ((*(char *)(lVar10 + 0x6ad9) != '\0' && (*(int *)(lVar10 + 0x6b08) == 0))))
    {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100646693;
      iVar7 = FUN_100432267(param_2 & 0xffffffff,&local_6698);
      if (iVar7 != 0) goto LAB_10064669b;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064702e;
      uVar9 = _objc_alloc(PTR__OBJC_CLASS___AMPDeviceSyncPrefs_10082b9c8);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647048;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar9,PTR_s_initWithIPodPrefs__10088db48,CONCAT44(uStack_6694,local_6698));
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647062;
      uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                         (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8
                         );
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064706a;
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647083;
      uVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                         (&objc::class_t::AMPDevicesClientConnection,
                          PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064708b;
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470a4;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar15,PTR_s_didChangeDeviceSyncPrefs_forDevi_10088de98,uVar9,uVar13);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470ad;
      (*(code *)PTR__objc_release_10082c7b0)(uVar13);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470b6;
      (*(code *)PTR__objc_release_10082c7b0)(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006470c2;
      FUN_10022af49(CONCAT44(uStack_6694,local_6698));
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100646292;
      uVar9 = FUN_100642e20();
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064629a;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006462aa;
      cVar6 = _os_log_type_enabled(uVar9,2);
      if (cVar6 != '\0') {
        local_6738 = 0;
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1006462dc;
        __os_log_impl(0x100000000,uVar9,2,
                      "device setup is pending, not sending didChangeDeviceSyncPrefs notification",
                      &local_6738,2);
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006462e5;
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
LAB_10064669b:
      uVar9 = 0;
    }
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1006466a7;
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    goto LAB_10064749e;
  case 0x69707375:
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646e54;
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_performBlockForEachClientConnect_10088df58);
    break;
  case 0x69707377:
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646d86;
    uVar15 = _objc_alloc_init(PTR__OBJC_CLASS___AMPDeviceSoftwareInfo_10082b9c0);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646d9c;
    (*(code *)PTR__objc_msgSend_10082c770)(uVar15,PTR_s_setSoftwareVersion__10088dcc0,uVar16);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646db0;
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646db8;
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646dd1;
    uVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                       (&objc::class_t::AMPDevicesClientConnection,
                        PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646dd9;
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646df2;
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar9,PTR_s_updateAvailableWithSoftwareInfo__10088df18,uVar15,uVar13);
    pcVar11 = (code *)PTR__objc_release_10082c7b0;
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646dff;
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    *(undefined8 *)((long)&local_38 + lVar3) = 0x100646e08;
    (*pcVar11)(uVar9);
LAB_100646cf2:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
LAB_100646d0c:
      (*pcVar11)(uVar15);
      return;
    }
    goto LAB_100647708;
  case 0x69707378:
switchD_100645d94_caseD_69707378:
    if (param_1 != 0x69707378) {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064649b;
      lVar10 = FUN_1004de449(param_2 & 0xffffffff);
      if ((lVar10 != 0) &&
         ((*(char *)(lVar10 + 0x6acf) != '\0' || (*(int *)(lVar10 + 0x6b0c) != 0))))
      goto LAB_10064749e;
    }
    if (cVar6 == '\0') {
      if (iVar7 == 0) {
        local_6720 = 0;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x100647007;
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           param_4 & 0xffffffff);
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10064700f;
        local_6720 = _objc_retainAutoreleasedReturnValue(uVar9);
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647424;
      (*(code *)PTR__objc_msgSend_10082c770)
                (&objc::class_t::AMPDevicesClientConnection,
                 PTR_s_notifySyncCompletedForObjectID_w_10088df68,param_2 & 0xffffffff,local_6720);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647438;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8)
      ;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647440;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647459;
      uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                         (&objc::class_t::AMPDevicesClientConnection,
                          PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647461;
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647481;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar9,PTR_s_didCompleteSyncForDeviceWithIden_10088deb8,uVar15,local_6720);
      puVar2 = PTR__objc_release_10082c7b0;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064748e;
      (*(code *)PTR__objc_release_10082c7b0)(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647494;
      (*(code *)puVar2)(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064749e;
      (*(code *)puVar2)(local_6720);
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006464d7;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8)
      ;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006464df;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006464f8;
      uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                         (&objc::class_t::AMPDevicesClientConnection,
                          PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100646500;
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100646516;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar9,PTR_s_didStartSyncForDeviceWithIdentif_10088de30,uVar15);
      puVar2 = PTR__objc_release_10082c7b0;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100646523;
      (*(code *)PTR__objc_release_10082c7b0)(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100646529;
      (*(code *)puVar2)(uVar9);
    }
LAB_10064749e:
    if (param_1 < 0x69707369) {
      if ((param_1 == 0x69706372) || (param_1 == 0x69706d64)) goto LAB_100647637;
    }
    else if (param_1 == 0x69707369) {
LAB_100647637:
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064764d;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (&objc::class_t::AMPDevicesClientConnection,
                         PTR_s_deviceIdentifierForDulcimerOrRaw_10088df60,param_2 & 0xffffffff);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647655;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064766c;
      uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                         (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8
                         );
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647674;
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064768a;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar15,PTR_s_didChangeSoftwareInfoForDeviceWi_10088ded8,uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647693;
      (*(code *)PTR__objc_release_10082c7b0)(uVar15);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064769c;
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    }
    else {
      if (param_1 != 0x6d647571) {
LAB_1006474c1:
        if (param_1 != 0x6d646369) break;
      }
LAB_1006474ce:
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006474e2;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (&objc::class_t::AMPDevicesClientConnection,
                         PTR_s_allDeviceIdentifiers_10088dd40);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1006474ea;
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      local_6758 = 0;
      uStack_6750 = 0;
      local_6768 = 0;
      uStack_6760 = 0;
      local_6778 = (long *)0x0;
      uStack_6770 = 0;
      local_6788 = 0;
      lStack_6780 = 0;
      *(undefined8 *)((long)&local_38 + lVar3) = 0x10064750c;
      local_6728 = (*(code *)PTR__objc_retain_10082c7b8)(uVar9);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647533;
      lVar10 = (*(code *)PTR__objc_msgSend_10082c770)
                         (local_6728,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_6788,
                          local_6718,0x10);
      if (lVar10 != 0) {
        local_6740 = *local_6778;
        do {
          puVar5 = PTR_s_didChangeSoftwareInfoForDeviceWi_10088ded8;
          puVar2 = PTR_s_sharedInstance_10088c4b8;
          lVar12 = 0;
          local_6720 = lVar10;
          do {
            if (*local_6778 != local_6740) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10064758b;
              _objc_enumerationMutation(local_6728);
            }
            uVar9 = *(undefined8 *)(lStack_6780 + lVar12 * 8);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006475a6;
            uVar15 = (*(code *)PTR__objc_msgSend_10082c770)
                               (&objc::class_t::AMPDevicesClientBroadcaster,puVar2);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006475ae;
            uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006475c0;
            (*(code *)PTR__objc_msgSend_10082c770)(uVar15,puVar5,uVar9);
            *(undefined8 *)((long)&local_38 + lVar3) = 0x1006475c9;
            (*(code *)PTR__objc_release_10082c7b0)(uVar15);
            lVar12 = lVar12 + 1;
          } while (local_6720 != lVar12);
          *(undefined8 *)((long)&local_38 + lVar3) = 0x1006475fd;
          lVar10 = (*(code *)PTR__objc_msgSend_10082c770)
                             (local_6728,PTR_s_countByEnumeratingWithState_obje_10088bb48,
                              &local_6788,local_6718,0x10);
        } while (lVar10 != 0);
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647616;
      (*(code *)PTR__objc_release_10082c7b0)(local_6728);
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100647623;
      (*(code *)PTR__objc_release_10082c7b0)(local_6728);
    }
    break;
  default:
    if (param_1 != 0x69707369) goto LAB_1006474c1;
    goto LAB_100647637;
  }
switchD_100645d94_caseD_69707371:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_100647708:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar3) = &UNK_10064770d;
  ___stack_chk_fail();
}

