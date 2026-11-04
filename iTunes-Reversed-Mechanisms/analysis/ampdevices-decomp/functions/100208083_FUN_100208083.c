// name: FUN_100208083
// address: 100208083

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100208083(long *param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  double *pdVar7;
  long lVar8;
  sbyte sVar9;
  int iVar10;
  char *pcVar11;
  long lVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double local_78;
  char local_69;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 != DAT_1008c5470) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_68 = 0x202;
      uStack_66 = 0x822;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xe0cc;
      uStack_58 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (DAT_1008a2b84 == '\x01') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_68 = 0x202;
      uStack_66 = 0x822;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xe0f0;
      uStack_58 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  DAT_1008a2b84 = 1;
  local_69 = '\0';
  FUN_1003b819c();
  FUN_1003b81d4();
  FUN_1003b820e();
  FUN_10031a50b();
  uVar5 = FUN_1001c156e();
  FUN_1001c6987(uVar5,0x69646c65,0,0,0);
  cVar3 = FUN_1001c19bc();
  if (cVar3 != '\0') {
    cVar3 = FUN_1004afa71(0,7);
    if (cVar3 == '\0') {
      lVar12 = FUN_100156d72();
      lVar8 = *(long *)(lVar12 + 0xe8);
      local_68 = (undefined2)lVar8;
      uStack_66 = (undefined2)((ulong)lVar8 >> 0x10);
      uStack_64 = (undefined4)((ulong)lVar8 >> 0x20);
      plVar6 = *(long **)(lVar12 + 0xf0);
      uStack_60 = SUB84(plVar6,0);
      uStack_5c = (undefined2)((ulong)plVar6 >> 0x20);
      uStack_5a = (undefined2)((ulong)plVar6 >> 0x30);
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar6[1] = plVar6[1] + 1;
        UNLOCK();
      }
      bVar2 = true;
      if (lVar8 == 0) {
        iVar10 = 1;
      }
      else {
        cVar3 = FUN_10012dcd8();
        iVar10 = 2;
        if (cVar3 != '\0') {
          if ((DAT_1008a2b80 & 2) == 0) {
            DAT_1008a2b80 = DAT_1008a2b80 | 2;
            cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
            cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
            if (cVar3 == '\0') {
              if (cVar4 == '\0') goto LAB_1002083bd;
              local_48 = 0x4000100;
              uStack_44 = 0x14;
              pcVar11 = "quit> waiting on reason %u";
              uVar5 = 8;
            }
            else {
              if (cVar4 == '\0') goto LAB_1002083bd;
              local_48 = 0x8220102;
              uStack_44 = 0x7ae068;
              uStack_40 = 1;
              pcVar11 = "quit> waiting on reason %{public}s";
              uVar5 = 0xc;
            }
            bVar2 = false;
            __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,0,pcVar11,&local_48,uVar5);
          }
          else {
LAB_1002083bd:
            bVar2 = false;
          }
        }
      }
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (bVar2) {
        cVar3 = FUN_10055bf98();
        sVar9 = (sbyte)iVar10;
        if (cVar3 == '\0') {
          if ((DAT_1008a2b80 >> iVar10 & 1) == 0) {
            DAT_1008a2b80 = DAT_1008a2b80 | 1 << sVar9;
            cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
            cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
            if (cVar3 == '\0') {
              if (cVar4 != '\0') {
                uStack_64 = 7;
LAB_1002082c8:
                uStack_66 = 0x400;
                local_68 = 0x100;
                pcVar11 = "quit> waiting on reason %u";
                uVar5 = 8;
                goto LAB_1002082d0;
              }
            }
            else if (cVar4 != '\0') {
              uStack_64 = 0x7adfd7;
LAB_1002081c9:
              uStack_60 = 1;
              uStack_66 = 0x822;
              local_68 = 0x102;
              pcVar11 = "quit> waiting on reason %{public}s";
              uVar5 = 0xc;
LAB_1002082d0:
              __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,0,pcVar11,&local_68,uVar5);
            }
          }
        }
        else {
          cVar3 = FUN_1004e33e5(0);
          if (cVar3 == '\0') {
            if (DAT_1008c5d64 == 0) {
              plVar6 = (long *)FUN_10039a28c();
              cVar3 = (**(code **)(*plVar6 + 0x28))(plVar6,1,0,0,0);
              if (cVar3 == '\0') {
                if ((DAT_1008c7900 == 0) || (dVar14 = (double)FUN_1001ebd46(), 0.0 < dVar14)) {
                  if ((DAT_1008a2b80 & 0x20 << sVar9) == 0) {
                    DAT_1008a2b80 = DAT_1008a2b80 | 0x20 << sVar9;
                    cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
                    if (cVar3 != '\0') {
                      local_68 = 0;
                      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,0,
                                    "quit> Shutdown complete; app is now clear to exit!",&local_68,2
                                   );
                    }
                  }
                  FUN_1001c1811(5);
                  FUN_1002079e6();
                }
                else if ((DAT_1008a2b80 & 0x10 << sVar9) == 0) {
                  DAT_1008a2b80 = DAT_1008a2b80 | 0x10 << sVar9;
                  cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
                  cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
                  if (cVar3 == '\0') {
                    if (cVar4 != '\0') {
                      uStack_64 = 0xb;
                      goto LAB_1002082c8;
                    }
                  }
                  else if (cVar4 != '\0') {
                    uStack_64 = 0x7ae044;
                    goto LAB_1002081c9;
                  }
                }
              }
              else if ((DAT_1008a2b80 & 8 << sVar9) == 0) {
                DAT_1008a2b80 = DAT_1008a2b80 | 8 << sVar9;
                cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
                cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
                if (cVar3 == '\0') {
                  if (cVar4 != '\0') {
                    uStack_64 = 10;
                    goto LAB_1002082c8;
                  }
                }
                else if (cVar4 != '\0') {
                  uStack_64 = 0x7ae01f;
                  goto LAB_1002081c9;
                }
              }
            }
            else if ((DAT_1008a2b80 & 4 << sVar9) == 0) {
              DAT_1008a2b80 = DAT_1008a2b80 | 4 << sVar9;
              cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
              cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
              if (cVar3 == '\0') {
                if (cVar4 != '\0') {
                  uStack_64 = 9;
                  goto LAB_1002082c8;
                }
              }
              else if (cVar4 != '\0') {
                uStack_64 = 0x7adffa;
                goto LAB_1002081c9;
              }
            }
          }
          else if ((DAT_1008a2b80 & 2 << sVar9) == 0) {
            DAT_1008a2b80 = DAT_1008a2b80 | 2 << sVar9;
            cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
            cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
            if (cVar3 == '\0') {
              if (cVar4 != '\0') {
                uStack_64 = 8;
                goto LAB_1002082c8;
              }
            }
            else if (cVar4 != '\0') {
              uStack_64 = 0x7adfe4;
              goto LAB_1002081c9;
            }
          }
        }
      }
    }
    else if ((DAT_1008a2b80 & 1) == 0) {
      DAT_1008a2b80 = DAT_1008a2b80 | 1;
      cVar3 = FUN_1001ebe9f("com.apple.AMPDevicesAgent");
      cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0);
      if (cVar3 == '\0') {
        if (cVar4 != '\0') {
          uStack_64 = 3;
          goto LAB_1002082c8;
        }
      }
      else if (cVar4 != '\0') {
        uStack_64 = 0x7adfc2;
        goto LAB_1002081c9;
      }
    }
  }
  FUN_100178bf5(0,&local_69);
  FUN_1001119bc();
  cVar3 = local_69;
  lVar8 = DAT_1008c5488;
  dVar14 = (double)FUN_1001ebd46();
  dVar15 = (double)FUN_100178fe9(dVar14,0);
  local_78 = _DAT_100707dc0;
  if ((((dVar15 != DAT_100700af8) || (NAN(dVar15) || NAN(DAT_100700af8))) &&
      (dVar15 != 0.0 || cVar3 != '\0')) && (local_78 = dVar15, dVar15 <= 0.0)) goto LAB_1002089a9;
  dVar15 = local_78;
  if (DAT_1008c7598 == 0) {
LAB_100208867:
    if (DAT_1008c75a0 != 0) {
      iVar10 = 0;
      lVar12 = DAT_1008c75a0;
      do {
        iVar10 = iVar10 + (*(uint *)(lVar12 + 0x17c) & 1);
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
      if (iVar10 != 0) goto LAB_1002088b0;
    }
    if (DAT_1008c75a8 != 0) {
      iVar10 = 0;
      lVar12 = DAT_1008c75a8;
      do {
        iVar10 = iVar10 + (*(uint *)(lVar12 + 0x78) & 1);
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
      if (iVar10 != 0) goto LAB_1002088b0;
    }
  }
  else {
    iVar10 = 0;
    lVar12 = DAT_1008c7598;
    do {
      iVar10 = (iVar10 + 1) - (uint)(*(int *)(lVar12 + 0x70) == 0);
      lVar12 = *(long *)(lVar12 + 8);
    } while (lVar12 != 0);
    if (iVar10 == 0) goto LAB_100208867;
LAB_1002088b0:
    dVar15 = _DAT_100707dc0;
    if (local_78 <= _DAT_100707dc0) {
      dVar15 = local_78;
    }
  }
  local_78 = dVar15;
  pdVar7 = (double *)&DAT_100717da0;
  lVar12 = 0;
  do {
    dVar15 = local_78;
    if ((&DAT_1008c5490)[lVar12] != 0) {
      pdVar13 = pdVar7;
      if (*(char *)(lVar8 + 1) != '\0') {
        pdVar13 = pdVar7 + -1;
      }
      dVar15 = *pdVar13;
      if (local_78 <= *pdVar13) {
        dVar15 = local_78;
      }
    }
    local_78 = dVar15;
    lVar12 = lVar12 + 1;
    pdVar7 = pdVar7 + 3;
  } while (lVar12 != 8);
  dVar15 = local_78;
  if ((DAT_1008c54b1 != '\0') &&
     (dVar15 = *(double *)(&DAT_100717d40 + (ulong)(*(char *)(lVar8 + 1) == '\0') * 8),
     local_78 <= *(double *)(&DAT_100717d40 + (ulong)(*(char *)(lVar8 + 1) == '\0') * 8))) {
    dVar15 = local_78;
  }
  local_78 = dVar15;
  for (lVar12 = FUN_100306d78(); dVar15 = local_78, lVar12 != 0; lVar12 = FUN_100306e32(lVar12)) {
    cVar3 = FUN_100585b24(lVar12);
    if (cVar3 != '\0') {
      dVar15 = *(double *)(&DAT_100717d50 + (ulong)(*(char *)(lVar8 + 1) == '\0') * 8);
      if (local_78 <= *(double *)(&DAT_100717d50 + (ulong)(*(char *)(lVar8 + 1) == '\0') * 8)) {
        dVar15 = local_78;
      }
      break;
    }
  }
  local_78 = dVar15;
  for (lVar8 = FUN_100306d78(); lVar8 != 0; lVar8 = FUN_100306e32(lVar8)) {
    cVar3 = FUN_1003166a1(lVar8,0xf);
    if (cVar3 != '\0') {
      _DAT_1008c5480 = DAT_10070d3a0;
      if (DAT_10070d3a0 < local_78) goto LAB_1002089fc;
      break;
    }
  }
LAB_1002089a9:
  _DAT_1008c5480 = local_78;
  if (((local_78 == 0.0) && (!NAN(local_78))) &&
     ((dVar14 < DAT_1008a2b88 || (DAT_1008a2b88 + DAT_100700b00 < dVar14)))) {
    _DAT_1008c5480 = DAT_100711ee8;
    DAT_1008a2b88 = dVar14;
  }
LAB_1002089fc:
  FUN_1001bdf7a(*param_1);
  DAT_1008a2b84 = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

