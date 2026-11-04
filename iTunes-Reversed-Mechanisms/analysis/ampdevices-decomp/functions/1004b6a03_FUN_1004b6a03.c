// name: FUN_1004b6a03
// address: 1004b6a03

ulong FUN_1004b6a03(long param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  ulong uVar14;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  uint local_46a;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 uStack_446;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44c = 0x822;
      uStack_44a = 0x4873;
      uStack_448 = 0x7d;
      uStack_446 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004b6b43:
    iVar6 = -0x32;
  }
  else {
    if ((*(char *)(param_1 + 0x778) != '\0') || (*(int *)(param_1 + 0x1304) != 0x68747470)) {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        uStack_454 = 0x7a0a90;
        uStack_450 = 1;
        uStack_44c = 0x822;
        uStack_44a = 0x399d;
        uStack_448 = 0x7d;
        uStack_446 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004b6b43;
    }
    if ((*(byte *)(param_1 + 0x144) & 0x20) == 0) {
LAB_1004b6a99:
      *(undefined8 *)(param_1 + 0x1b60) = param_2[2];
      uVar9 = FUN_1001705fc(*param_2);
      *(undefined8 *)(param_1 + 0x1350) = uVar9;
      if (*(long *)(param_1 + 7000) == 0) {
        lVar7 = *(long *)(param_1 + 0x1b60);
      }
      else {
        cVar3 = FUN_1001997d8(*param_2);
        if (cVar3 == '\0') {
          *(undefined8 *)(param_1 + 7000) = 0;
          *(undefined8 *)(param_1 + 0x1b78) = 0;
          *(undefined8 *)(param_1 + 0x12f0) = 0;
          *(undefined8 *)(param_1 + 0x200) = 0;
          plVar1 = *(long **)(param_1 + 0x1258);
          if (plVar1 == (long *)0x0) {
            FUN_1004ac981(param_1);
          }
          else {
            (**(code **)(*plVar1 + 0x108))(plVar1,0);
          }
          FUN_1004ad108(param_1);
          uVar14 = 0x1f41;
          goto LAB_1004b6b5b;
        }
        lVar7 = *(long *)(param_1 + 0x1b60) + *(long *)(param_1 + 7000);
        *(long *)(param_1 + 0x1b60) = lVar7;
        *(long *)(param_1 + 0x1b78) = *(long *)(param_1 + 7000);
      }
      if ((lVar7 == -1) || (*(int *)(param_1 + 0x140) != 0x66696c65)) {
LAB_1004b6da1:
        if (*(char *)(param_1 + 0x778) == '\0') {
          iVar6 = *(int *)(param_1 + 0x140);
          if (iVar6 != 0x66696c65) goto LAB_1004b6ec7;
          if ((*(int *)(param_1 + 0x1304) != 0x636f7079) && (*(int *)(param_1 + 0x7d8) < 0))
          goto LAB_1004b6dae;
LAB_1004b6f54:
          uVar5 = *(uint *)(param_1 + 0x7d8);
          if (*(long *)(param_1 + 0x1258) == 0) {
            uVar9 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar9,0x10);
            if (cVar3 != '\0') {
              local_458 = 0x8220202;
              uStack_454 = 0x7a0a90;
              uStack_450 = 1;
              uStack_44c = 0x822;
              uStack_44a = 0x48c9;
              uStack_448 = 0x7d;
              uStack_446 = 1;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if (((uVar5 & 2) != 0) && (*(long *)(param_1 + 0x1b60) != -1)) {
            lVar7 = (**(code **)(**(long **)(param_1 + 0x1258) + 0x170))();
            if (lVar7 == 0) {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                local_458 = 0x8220202;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x822;
                uStack_44a = 0x48eb;
                uStack_448 = 0x7d;
                uStack_446 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1004b6b43;
            }
            uVar10 = FUN_10017d0ec(lVar7,1,*(undefined8 *)(param_1 + 0x1b60),0);
            iVar6 = (int)uVar10;
            uVar14 = uVar10 & 0xffffffff;
            if (iVar6 == -0x80) goto LAB_1004b6b49;
            if (iVar6 != 0) {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                puVar12 = &local_458;
                local_458 = 0x8220202;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x400;
                uStack_44a = (undefined2)uVar10;
                uStack_448 = (undefined2)(uVar10 >> 0x10);
                goto LAB_1004b6e42;
              }
              goto LAB_1004b71db;
            }
          }
          if ((*(byte *)(param_1 + 0x7d8) & 0x20) != 0) {
            lVar7 = FUN_100171a6c(*param_2,PTR_cf_Content_Encoding_10083c4c8);
            if ((lVar7 != 0) &&
               ((cVar3 = FUN_100169eb1(lVar7,PTR_cf_gzip_10083c518), cVar3 != '\0' ||
                (cVar3 = FUN_100169eb1(lVar7,PTR_cf_x_gzip_10083c520), cVar3 != '\0')))) {
              *(undefined2 *)(param_1 + 0x12d1) = 1;
            }
            FUN_10017060f(lVar7);
          }
        }
        else {
LAB_1004b6dae:
          cVar3 = FUN_1004aa626(param_1);
          if ((cVar3 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
            uVar9 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar9,0x10);
            uVar14 = 0x1f49;
            if (cVar3 != '\0') {
              pcVar11 = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
LAB_1004b7169:
              uStack_450 = 1;
              uStack_454 = 0x7a0a90;
              uStack_44c = 0x822;
              local_458 = 0x8220202;
              uStack_44a = SUB82(pcVar11,0);
              uStack_448 = (undefined2)((ulong)pcVar11 >> 0x10);
              uStack_446 = (undefined4)((ulong)pcVar11 >> 0x20);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
LAB_1004b6dea:
            FUN_1001782e9(0,0);
LAB_1004b6df3:
            uVar9 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar9,0x10);
            if (cVar3 != '\0') {
              puVar12 = &local_458;
              local_458 = 0x8220202;
              uStack_454 = 0x7a0a90;
              uStack_450 = 1;
              uStack_44c = 0x400;
              uStack_44a = (undefined2)uVar14;
              uStack_448 = (undefined2)(uVar14 >> 0x10);
              goto LAB_1004b6e42;
            }
            goto LAB_1004b71db;
          }
          if (((*(int *)(param_1 + 0x140) == 0x66696c65) &&
              (*(int *)(param_1 + 0x1304) != 0x636f7079)) && (*(int *)(param_1 + 0x7d8) < 0)) {
            if (*(int *)(param_1 + 0x1304) != 0x68747470) {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              uVar14 = 0xffffffce;
              if (cVar3 != '\0') {
                pcVar11 = 
                "( ((inItem)->isContainer == false) && ((inItem)->leaf.downloadTransport.transportKind == kDownloadTransportKind_HTTP) )"
                ;
                goto LAB_1004b7169;
              }
              goto LAB_1004b6dea;
            }
            cVar3 = FUN_1004aa626(param_1);
            if (cVar3 == '\0') {
              uVar9 = FUN_1001cc310();
LAB_1004b749c:
              cVar3 = _os_log_type_enabled(uVar9);
              if (cVar3 != '\0') {
                pcVar11 = "DownloadItem_IsValid(inItem)";
LAB_1004b76aa:
                uStack_44c = 0x822;
                uStack_450 = 1;
                uStack_454 = 0x7a0a90;
                local_458 = 0x8220202;
                uStack_44a = SUB82(pcVar11,0);
                uStack_448 = (undefined2)((ulong)pcVar11 >> 0x10);
                uStack_446 = (undefined4)((ulong)pcVar11 >> 0x20);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
LAB_1004b74b4:
              FUN_1001782e9(0);
LAB_1004b74bd:
              cVar3 = *(long *)(param_1 + 7000) == 0;
              uVar13 = 2;
              bVar2 = true;
            }
            else {
              if ((*(char *)(param_1 + 0x778) != '\0') || (*(int *)(param_1 + 0x1304) != 0x68747470)
                 ) {
                uVar9 = FUN_1001cc310();
LAB_1004b7457:
                cVar3 = _os_log_type_enabled(uVar9);
                if (cVar3 != '\0') {
                  pcVar11 = 
                  "( ((inItem)->isContainer == false) && ((inItem)->leaf.downloadTransport.transportKind == kDownloadTransportKind_HTTP) )"
                  ;
                  goto LAB_1004b76aa;
                }
                goto LAB_1004b74b4;
              }
              if (*(char *)(param_1 + 0x1360) == '\0') {
                if (*(long *)(param_1 + 0x1350) != 0) {
                  cVar3 = FUN_100199707();
                  if (cVar3 != '\0') {
                    *(byte *)(param_1 + 0x1364) = *(byte *)(param_1 + 0x1364) | 1;
                  }
                  *(undefined1 *)(param_1 + 0x1360) = 1;
                  goto LAB_1004b72b7;
                }
                goto LAB_1004b74bd;
              }
LAB_1004b72b7:
              if ((*(byte *)(param_1 + 0x1364) & 1) == 0) goto LAB_1004b74bd;
              cVar3 = FUN_1004aa626(param_1);
              if (cVar3 == '\0') {
                uVar9 = FUN_1001cc310();
                goto LAB_1004b749c;
              }
              if ((*(char *)(param_1 + 0x778) != '\0') || (*(int *)(param_1 + 0x1304) != 0x68747470)
                 ) {
                uVar9 = FUN_1001cc310();
                goto LAB_1004b7457;
              }
              if (param_2[2] == -1) goto LAB_1004b74bd;
              if ((*(byte *)(param_1 + 0x7de) & 0x80) != 0) {
                lVar7 = FUN_100171a6c(*param_2);
                if (lVar7 != 0) {
                  FUN_10017060f(lVar7);
                  lVar7 = FUN_100171a6c(*param_2);
                  if (lVar7 != 0) {
                    FUN_10017060f(lVar7);
                    goto LAB_1004b734b;
                  }
                }
                goto LAB_1004b74bd;
              }
LAB_1004b734b:
              cVar3 = FUN_1004b90bd(param_1);
              uVar13 = 1;
              bVar2 = false;
            }
            cVar4 = FUN_1004aa626(param_1);
            if (cVar4 != '\0') {
              *(undefined1 *)(param_1 + 0x210) = uVar13;
            }
            uVar14 = 0;
            if (!bVar2) {
              uVar14 = FUN_1004ab66b(param_1);
              uVar14 = uVar14 & 0xffffffff;
            }
            iVar6 = (int)uVar14;
            if (cVar3 == '\0') {
              *(undefined8 *)(param_1 + 7000) = 0;
              *(undefined8 *)(param_1 + 0x1b78) = 0;
              *(undefined8 *)(param_1 + 0x12f0) = 0;
              *(undefined8 *)(param_1 + 0x200) = 0;
              (**(code **)(**(long **)(param_1 + 0x1258) + 0x108))();
              FUN_1004ad108(param_1);
            }
            if (iVar6 == -0x80) goto LAB_1004b6b49;
            if (iVar6 != 0) goto LAB_1004b6df3;
          }
          uVar14 = 0x1f41;
          if (*(char *)(param_1 + 0x1ca) != '\0') goto LAB_1004b6b5b;
          iVar6 = *(int *)(param_1 + 0x140);
LAB_1004b6ec7:
          if (iVar6 == 0x66696c65) goto LAB_1004b6f54;
          if ((iVar6 == 0x6d656d72) && (*(long *)(param_1 + 0x12f8) == 0)) {
            lVar7 = 0;
            if (*(long *)(param_1 + 0x1b60) != -1) {
              lVar7 = *(long *)(param_1 + 0x1b60);
            }
            if (lVar7 < 0xffffffff) {
              lVar7 = FUN_100170ea9(DAT_1008c4d90);
              *(long *)(param_1 + 0x12f8) = lVar7;
              if (lVar7 != 0) goto LAB_1004b703f;
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                local_458 = 0x8220202;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x822;
                uStack_44a = 0x48a4;
                uStack_448 = 0x7d;
                uStack_446 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                local_458 = 0x8220202;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x822;
                uStack_44a = 0x488c;
                uStack_448 = 0x7d;
                uStack_446 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            iVar6 = -0x6c;
            goto LAB_1004b6b49;
          }
        }
LAB_1004b703f:
        uVar14 = 0;
        if ((*(byte *)(param_1 + 0x144) & 0x10) == 0) goto LAB_1004b6b5b;
        local_458 = 0;
        uStack_454 = 0;
        uStack_450 = 0;
        uStack_44c = 0;
        uStack_44a = 0;
        uVar14 = 0;
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar7 = std::__shared_weak_count::lock();
          uStack_450 = (undefined4)lVar7;
          uStack_44c = (undefined2)((ulong)lVar7 >> 0x20);
          uStack_44a = (undefined2)((ulong)lVar7 >> 0x30);
          if (lVar7 != 0) {
            plVar1 = *(long **)(param_1 + 0x70);
            local_458 = SUB84(plVar1,0);
            uStack_454 = (undefined4)((ulong)plVar1 >> 0x20);
            if (plVar1 != (long *)0x0) {
              uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2);
              uVar14 = (ulong)uVar5;
            }
          }
        }
        if (*(code **)(param_1 + 0x80) != (code *)0x0) {
          uVar5 = (**(code **)(param_1 + 0x80))(param_1,0x68656472,param_2,0,param_1 + 0x90);
          uVar14 = (ulong)uVar5;
        }
        FUN_10021e316(&local_458);
      }
      else {
        uVar5 = FUN_1004aa912(param_1,&local_458);
        uVar14 = (ulong)uVar5;
        if (uVar5 == 0) {
          cVar3 = FUN_10018a135(&local_458);
          if (cVar3 != '\0') goto LAB_1004b6da1;
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          uVar14 = 0x1fa7;
          if (cVar3 != '\0') {
            puVar12 = &local_478;
            local_478 = 0x8220202;
            local_474 = "Assertion failure";
            local_46c = 0x400;
            local_46a = 0x1fa7;
            goto LAB_1004b6e42;
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            puVar12 = &local_478;
            local_478 = 0x8220202;
            local_474 = "Assertion failure";
            local_46c = 0x400;
            local_46a = uVar5;
LAB_1004b6e42:
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar12,0x12);
          }
        }
      }
LAB_1004b71db:
      iVar6 = (int)uVar14;
      if (iVar6 == 0) goto LAB_1004b6b5b;
      if (iVar6 == -0x22) {
        iVar6 = -0x22;
        if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x144) & 0x40) == 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x5ca) = 1;
        }
      }
    }
    else {
      lVar7 = FUN_100171a6c(*param_2);
      if ((lVar7 == 0) || (lVar8 = FUN_100173bb7(lVar7,&cf_text_html,1), lVar8 != 0)) {
        FUN_10017060f(lVar7);
        goto LAB_1004b6a99;
      }
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        uStack_454 = 0x7a0a90;
        uStack_450 = 1;
        uStack_44c = 0x400;
        uStack_44a = 0x1f47;
        uStack_448 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
      FUN_10017060f(lVar7);
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      iVar6 = 0x1f47;
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        uStack_454 = 0x7a0a90;
        uStack_450 = 1;
        uStack_44c = 0x400;
        uStack_44a = 0x1f47;
        uStack_448 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
LAB_1004b6b49:
  uVar14 = 0;
  if (*(int *)(param_1 + 0x170) == 0) {
    *(int *)(param_1 + 0x170) = iVar6;
  }
LAB_1004b6b5b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

