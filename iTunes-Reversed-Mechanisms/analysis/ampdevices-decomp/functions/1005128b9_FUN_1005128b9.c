// name: FUN_1005128b9
// address: 1005128b9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1005128b9(long param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double local_70;
  double local_68;
  char local_5c;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    local_68 = _DAT_100710490;
    if ((*(char *)(param_1 + 0x6250) != '\0') &&
       (cVar3 = '\x01', *(char *)(param_1 + 0x6210) != '\0')) {
LAB_100512de1:
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return cVar3;
    }
  }
  else {
    local_68 = DAT_100744e18;
  }
  dVar14 = (double)FUN_1001ebd46();
  local_70 = dVar14 + DAT_100700458;
  uVar11 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
  iVar13 = param_2;
  do {
    iVar5 = FUN_1001b1a0f();
    iVar6 = FUN_1001b19b0();
    if (iVar5 == iVar6) {
      FUN_1001727b4(DAT_100712580,uVar11,0);
    }
    else {
      FUN_1001b0d8d(DAT_10070e560);
    }
    dVar15 = (double)FUN_1001ebd46();
    if (local_70 <= dVar15) {
      if ((char)iVar13 == '\0') {
        bVar1 = false;
        FUN_100500aa3(param_1,0,0,0x69706463);
LAB_100512b39:
        if (*(int *)(param_1 + 0x66b0) == 0x69506f74) {
          cVar3 = true;
          if (0x111 < *(ushort *)(param_1 + 100)) {
            uVar10 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "handlerData->deviceInfo.versionInfo.productVersion < kIOSProductVersion_1_1_2";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            iVar13 = 0;
            FUN_1001782e9(0);
            goto LAB_100512bb4;
          }
        }
        else {
          local_5c = (char)param_2;
          if (local_5c == '\0') {
            if (*(char *)(param_1 + 0x6250) == '\0') goto LAB_100512bae;
            cVar3 = *(char *)(param_1 + 0x6210);
          }
          else {
            if ((*(char *)(param_1 + 0x6250) == '\0') || (*(char *)(param_1 + 0x6270) == '\0')) {
LAB_100512bae:
              cVar3 = false;
              goto LAB_100512bb1;
            }
            cVar3 = *(char *)(param_1 + 0x6230);
          }
          cVar3 = cVar3 != '\0';
        }
LAB_100512bb1:
        iVar13 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x7168);
        uVar7 = _CFDictionaryGetTypeID();
        lVar8 = FUN_1005ba383(uVar10,0,&cf_ActivationInfo,uVar7,0);
        if (lVar8 == 0) {
          uVar11 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar11,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "activationDict != nullptr";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar3 != '\0') {
            local_58 = local_58 & 0xffff0000;
            __os_log_impl(0x100000000,uVar11,0x10,"setup> failed to get activation info",&local_58,2
                         );
          }
          cVar3 = '\0';
          goto LAB_100512de1;
        }
        lVar9 = FUN_10016696d(lVar8,&cf_ActivationInfoXML);
        if ((lVar9 != 0) && (lVar9 = FUN_10016a9bd(DAT_1008c4d90,lVar9,0,0), lVar9 != 0)) {
          uVar2 = FUN_100167dd2(lVar9,&cf_ActivationRequiresActivationTicket,0);
          *(undefined1 *)(param_1 + 0x6af3) = uVar2;
          FUN_10017060f(lVar9);
        }
        lVar9 = FUN_1001668a7(lVar8);
        if (lVar9 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar10 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8);
          if (cVar3 != '\0') {
            local_54 = *(char **)(param_1 + 0x152c8);
            local_58 = 0x8420102;
            __os_log_impl(0x100000000,uVar10,1,
                          "activation> ActivationInfoComplete not found for device %{public}@",
                          &local_58,0xc);
          }
LAB_100512b12:
          bVar1 = false;
LAB_100512b15:
          cVar3 = '\0';
        }
        else {
          cVar3 = FUN_100171f12(lVar9);
          if (cVar3 == '\0') {
            if (*(int *)(param_1 + 0x15200) == 5) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar10 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8);
              bVar1 = true;
              if (cVar3 != '\0') {
                pcVar12 = "activation> activation info not complete and SIM PIN-locked";
LAB_100512c2c:
                local_58 = local_58 & 0xffff0000;
                bVar1 = true;
                __os_log_impl(0x100000000,uVar10,1,pcVar12,&local_58,2);
              }
            }
            else {
              if ((*(int *)(param_1 + 0x15200) != 4) || (*(char *)(param_1 + 0x6452) == '\0'))
              goto LAB_100512b12;
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar10 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8);
              bVar1 = true;
              if (cVar3 != '\0') {
                pcVar12 = "activation> activation info not complete and SIM not inserted";
                goto LAB_100512c2c;
              }
            }
            goto LAB_100512b15;
          }
          bVar1 = false;
        }
        FUN_10017060f(lVar8);
        FUN_100500aa3(param_1,0,0,0x69706463);
        iVar13 = 1;
        if (lVar9 == 0) goto LAB_100512b39;
      }
LAB_100512bb4:
      dVar15 = (double)FUN_1001ebd46();
      local_70 = dVar15 + DAT_100700458;
    }
    else {
      bVar1 = false;
      cVar3 = '\0';
    }
    if (local_68 + dVar14 <= dVar15) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar4 != '\0') {
        local_54 = *(char **)(param_1 + 0x152c8);
        local_58 = 0x8420102;
        __os_log_impl(0x100000000,uVar11,0x10,
                      "activation> timed out waiting for activation info for device %{public}@",
                      &local_58,0xc);
      }
      goto LAB_100512de1;
    }
    if (bVar1 || cVar3 != '\0') goto LAB_100512de1;
  } while( true );
}

