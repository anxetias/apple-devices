// name: FUN_100318904
// address: 100318904

ulong FUN_100318904(long param_1,int param_2,long *param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 local_4e8;
  char *local_4e4;
  undefined2 local_4dc;
  uint local_4da;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined2 local_4bc;
  undefined2 local_4ba;
  undefined2 uStack_4b8;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  char *local_48a;
  undefined4 local_78;
  long local_70;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar11 = 0;
  if (param_2 < 0x7464666c) {
    if (param_2 < 0x74646453) {
      if (param_2 < 0x7464634c) {
        if (((0x20 < param_2 + 0x8b9b9dadU) ||
            ((0x1000b0001U >> ((ulong)(param_2 + 0x8b9b9dadU) & 0x3f) & 1) == 0)) &&
           ((0x10 < param_2 + 0x8b9b9e9cU || ((0x10801U >> (param_2 + 0x8b9b9e9cU & 0x1f) & 1) == 0)
            ))) {
          if (param_2 == 0x67657374) goto switchD_100318a48_caseD_74646463;
          goto switchD_100318a48_caseD_74646467;
        }
      }
      else if (param_2 < 0x7464636c) {
        if ((param_2 != 0x7464634c) && (param_2 != 0x74646366))
        goto switchD_100318a48_caseD_74646467;
      }
      else if (param_2 != 0x7464636c) {
        if (param_2 != 0x7464636f) goto switchD_100318a48_caseD_74646467;
        *(char *)(param_3 + 2) = '\x01';
      }
    }
    else if (param_2 < 0x74646563) {
      switch(param_2) {
      case 0x74646463:
      case 0x74646465:
      case 0x74646476:
switchD_100318a48_caseD_74646463:
        uVar11 = 0xfffffffc;
        break;
      case 0x74646464:
      case 0x74646468:
      case 0x74646473:
        break;
      case 0x74646466:
        uVar11 = 0;
        FUN_10035879d(param_3[1],0,0);
        if (param_3[1] != 0) {
          FUN_1002ff169(param_3[1],1);
        }
        break;
      case 0x74646467:
      case 0x7464646a:
      case 0x7464646b:
      case 0x7464646c:
      case 0x7464646d:
      case 0x7464646e:
      case 0x7464646f:
      case 0x74646470:
      case 0x74646471:
      case 0x74646472:
      case 0x74646475:
switchD_100318a48_caseD_74646467:
        uVar11 = 0xffffffce;
        break;
      case 0x74646469:
        FUN_1002b0a4b(*param_3);
        break;
      case 0x74646474:
        FUN_10047086e(*param_3);
        break;
      default:
        if (param_2 != 0x74646453) goto switchD_100318a48_caseD_74646467;
      }
    }
    else if (param_2 != 0x74646563) {
      if (param_2 == 0x74646666) goto switchD_100318a48_caseD_74646463;
      if (param_2 != 0x74646669) goto switchD_100318a48_caseD_74646467;
      if ((*(byte *)(*(long *)(*param_3 + 8) + 0xc3) & 8) == 0) {
        iVar5 = FUN_1002b0559(*param_3,2);
        if ((iVar5 != 0) || (iVar5 = FUN_1002b3b9a(*param_3,&local_498), iVar5 != 0))
        goto switchD_100318a48_caseD_74646464;
        lVar8 = FUN_100301c98(param_1,*(undefined4 *)(*param_3 + 0x3c),&local_498);
      }
      else {
        lVar8 = FUN_10031973e(param_1);
      }
      param_3[1] = lVar8;
    }
  }
  else {
    if (param_2 < 0x7464726c) {
      if (param_2 < 0x74646c64) {
        if (param_2 < 0x74646773) {
          if (param_2 == 0x7464666c) {
            uVar6 = *(uint *)(param_1 + 0x1bb0) & 1;
            uVar4 = uVar6 + 2;
            if (*(char *)((long)param_3 + 0x2e) != '\0') {
              uVar4 = uVar6;
            }
            if ((char)*param_3 == '\b') {
              uVar4 = FUN_100230d9d(param_3[6]);
              uVar11 = (ulong)uVar4;
              if ((uVar4 != 0xffffff80) && (uVar4 != 0)) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  puVar13 = &local_498;
                  local_498 = 0x8220202;
                  local_494 = "Assertion failure";
                  local_48c = 0x400;
                  local_48a = (char *)CONCAT44(local_48a._4_4_,uVar4);
                  goto LAB_100319422;
                }
              }
            }
            else {
              uVar6 = FUN_10032046f(param_1,(char)*param_3,1,&local_498,0);
              uVar11 = (ulong)uVar6;
              if (uVar6 != 0xffffff80) {
                if (uVar6 == 0) {
                  uVar4 = FUN_100534237(&local_498,*(undefined4 *)((long)param_3 + 4),param_3[1],
                                        param_3[2],param_3[3],param_3[4],(int)param_3[5],
                                        *(char *)((long)param_3 + 0x2c),
                                        *(char *)((long)param_3 + 0x2d),uVar4,param_3[6]);
                  uVar11 = (ulong)uVar4;
                  if ((uVar4 != 0xffffff80) && (uVar4 != 0)) {
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 != '\0') {
                      puVar13 = &local_4c8;
                      local_4c8 = 0x8220202;
                      local_4c4 = "Assertion failure";
                      local_4bc = 0x400;
                      local_4ba = (undefined2)uVar4;
                      uStack_4b8 = (undefined2)(uVar4 >> 0x10);
                      goto LAB_100319422;
                    }
                  }
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    puVar13 = &local_4c8;
                    local_4c8 = 0x8220202;
                    local_4c4 = "Assertion failure";
                    local_4bc = 0x400;
                    local_4ba = (undefined2)uVar6;
                    uStack_4b8 = (undefined2)(uVar6 >> 0x10);
LAB_100319422:
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar13,
                                        0x12);
                  }
                }
              }
            }
          }
          else if ((param_2 != 0x74646762) && (param_2 != 0x74646764))
          goto switchD_100318a48_caseD_74646467;
        }
        else if (param_2 == 0x74646773) {
          *(undefined4 *)(param_3 + 1) = 2;
        }
        else if (param_2 == 0x74646774) {
          uVar4 = FUN_10032046f(param_1,*(char *)((long)param_3 + 1),1,&local_498,0);
          uVar11 = (ulong)uVar4;
          if (uVar4 != 0xffffff80) {
            if (uVar4 == 0) {
              uVar4 = FUN_100189f61(&local_498,&local_4c8);
              uVar11 = (ulong)uVar4;
              if (uVar4 != 0xffffff80) {
                if (uVar4 == 0) {
                  *(undefined4 *)(param_3 + 1) = local_4c4._4_4_;
                  *(uint *)((long)param_3 + 0xc) = CONCAT22(local_4ba,local_4bc);
                  *(undefined4 *)(param_3 + 2) = local_4c8;
                  *(undefined4 *)((long)param_3 + 0x14) = (undefined4)local_4c4;
                  param_3[3] = 0;
                  uVar11 = 0;
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    puVar13 = &local_4e8;
                    local_4e8 = 0x8220202;
                    local_4e4 = "Assertion failure";
                    local_4dc = 0x400;
                    local_4da = uVar4;
                    goto LAB_100319422;
                  }
                }
              }
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                puVar13 = &local_4c8;
                local_4c8 = 0x8220202;
                local_4c4 = "Assertion failure";
                local_4bc = 0x400;
                local_4ba = (undefined2)uVar4;
                uStack_4b8 = (undefined2)(uVar4 >> 0x10);
                goto LAB_100319422;
              }
            }
          }
        }
        else {
          if (param_2 != 0x74646964) goto switchD_100318a48_caseD_74646467;
          FUN_1004079ae(param_1);
          FUN_100357f30(param_1);
        }
      }
      else if (param_2 < 0x74646e70) {
        if ((param_2 != 0x74646c64) && (param_2 != 0x74646c6d)) {
          if (param_2 == 0x74646c73) {
            if (param_3[1] != 0) {
              uVar11 = FUN_100319dad(*param_3);
              return uVar11;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_498 = 0x8220202;
              local_494 = "Assertion failure";
              local_48c = 0x822;
              local_48a = "params->u.getLocationString.locationString != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          goto switchD_100318a48_caseD_74646467;
        }
        uVar11 = 0;
        FUN_100319a94(param_1,6,0);
      }
      else if (param_2 < 0x74647070) {
        if (param_2 != 0x74646e70) {
          if (param_2 == 0x7464706c) {
            uVar11 = FUN_100319644(*param_3);
            return uVar11;
          }
          goto switchD_100318a48_caseD_74646467;
        }
      }
      else {
        if (param_2 == 0x74647070) {
          lVar8 = *param_3;
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x000100318de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (**(code **)(lVar8 + 0x250))
                               (lVar8,(int)param_3[1],param_3[2],*(undefined8 *)(lVar8 + 600));
            return uVar11;
          }
          goto LAB_1003195ec;
        }
        if (param_2 != 0x74647072) goto switchD_100318a48_caseD_74646467;
      }
      goto switchD_100318a48_caseD_74646464;
    }
    if (param_2 < 0x7464756c) {
      if (param_2 < 0x7464737a) {
        if ((param_2 != 0x7464726c) && (param_2 != 0x74647274)) {
          if (param_2 != 0x74647364) goto switchD_100318a48_caseD_74646467;
          uVar11 = 0;
          FUN_100316867(param_1,0xf,0);
        }
      }
      else if (param_2 < 0x74647466) {
        if (param_2 != 0x7464737a) {
          if (param_2 == 0x74647461) goto switchD_100318a48_caseD_74646463;
          goto switchD_100318a48_caseD_74646467;
        }
        lVar8 = *param_3;
        if (param_3[2] == 0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_498 = 0x8220202;
            local_494 = "Assertion failure";
            local_48c = 0x822;
            local_48a = "params->u.getTrackInstanceSizeOnDisk.sourceFileInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (*(int *)((long)param_3 + 0x1c) == 0) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_498 = 0x8220202;
            local_494 = "Assertion failure";
            local_48c = 0x822;
            local_48a = "params->u.getTrackInstanceSizeOnDisk.copyVolumeBlockSize != 0";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
          }
          FUN_1001782e9(0,0);
        }
        bVar3 = (byte)*(uint *)(param_3 + 3);
        if (((*(uint *)(param_3 + 3) & 1) != 0) && ((short)param_3[6] == 0)) {
          *(undefined2 *)(param_3 + 6) = 0x80;
        }
        pcVar1 = (char *)param_3[2];
        if (pcVar1 == (char *)0x0) {
          if ((bVar3 & lVar8 != 0) == 0) {
            lVar14 = 0;
            lVar8 = 0;
          }
          else {
LAB_1003192df:
            lVar14 = 0;
            lVar8 = FUN_1005dfe52(*(undefined4 *)(lVar8 + 0x50),*(undefined4 *)(lVar8 + 100),
                                  (uint)*(ushort *)(param_3 + 6) * 1000,0);
          }
LAB_100319379:
          uVar12 = (ulong)*(uint *)((long)param_3 + 0x1c);
          uVar9 = (lVar8 + uVar12) - 1;
          uVar11 = 0;
          lVar8 = (uVar9 - (((lVar14 + uVar12) - 1) % uVar12 + uVar9 % uVar12)) + lVar14 + uVar12 +
                  -1;
        }
        else {
          if (*pcVar1 == '\0') {
            if ((lVar8 != 0 & bVar3) == 1) goto LAB_1003192df;
            lVar8 = *(long *)(pcVar1 + 0x20);
            lVar14 = *(long *)(pcVar1 + 0x28);
            goto LAB_100319379;
          }
          if (*(int *)(param_1 + 0x84) != 0x646f5069) {
            uVar10 = *(undefined4 *)((long)param_3 + 0x1c);
LAB_100319306:
            uVar4 = FUN_100182a5c(param_3[1],uVar10,0,param_3 + 4);
            goto LAB_10031931a;
          }
          cVar2 = FUN_1001ee068();
          uVar10 = *(undefined4 *)((long)param_3 + 0x1c);
          if (cVar2 == '\0') goto LAB_100319306;
          _memcpy(&local_498,(void *)param_3[1],0x420);
          local_70 = 0;
          local_78 = uVar10;
          uVar4 = FUN_10030c87e(param_1,FUN_10031a137,&local_498,1);
          uVar11 = (ulong)uVar4;
          if (uVar4 == 0xffffff80) goto switchD_100318a48_caseD_74646464;
          lVar8 = local_70;
          if (uVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_4c8 = 0x8220202;
              local_4c4 = "Assertion failure";
              local_4bc = 0x400;
              local_4ba = (undefined2)uVar4;
              uStack_4b8 = (undefined2)(uVar4 >> 0x10);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4c8,0x12);
            }
            lVar8 = local_70;
            if (uVar4 != 0) goto switchD_100318a48_caseD_74646464;
          }
        }
        param_3[4] = lVar8;
      }
      else if ((param_2 != 0x74647466) && (param_2 != 0x74647472))
      goto switchD_100318a48_caseD_74646467;
    }
    else if (param_2 < 0x7464766d) {
      if (((param_2 != 0x7464756c) && (param_2 != 0x74647574)) && (param_2 != 0x74647666))
      goto switchD_100318a48_caseD_74646467;
    }
    else if (param_2 < 0x7467766e) {
      if (param_2 == 0x7464766d) {
        if (((*(int *)(param_1 + 0x84) == 0x2062696c) && (cVar2 = FUN_1001c19b0(), cVar2 != '\0'))
           && (((iVar5 = FUN_10031a150(1,&local_498), iVar5 == 0 &&
                (cVar2 = FUN_10017ec13(*param_3,&local_498), cVar2 != '\0')) ||
               ((iVar5 = FUN_10031a150(2,&local_498), iVar5 == 0 &&
                (cVar2 = FUN_10017ec13(*param_3,&local_498), cVar2 != '\0')))))) {
          FUN_10031a32d(param_1);
        }
      }
      else {
        if (param_2 != 0x74647675) goto switchD_100318a48_caseD_74646467;
        if (*(int *)(param_1 + 0x84) == 0x2062696c) {
          FUN_10031a35a(param_1,(int)param_3[1]);
        }
      }
    }
    else if (param_2 == 0x7467766e) {
      if (param_3[1] == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_498 = 0x8220202;
          local_494 = "Assertion failure";
          local_48c = 0x822;
          local_48a = "params->u.getVolumeName.volumeName != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
        }
        FUN_1001782e9(0,0);
      }
      cVar2 = FUN_1002f7abe(param_1,(char)*param_3,&local_498);
      if (cVar2 == '\0') {
        uVar11 = 0xffffffdd;
      }
      else {
        uVar4 = FUN_10017e137(&local_498,0,param_3[1]);
LAB_10031931a:
        uVar11 = (ulong)uVar4;
      }
    }
    else {
      if (param_2 != 0x74677673) goto switchD_100318a48_caseD_74646467;
      uVar4 = FUN_10032046f(param_1,(char)*param_3,1,&local_498,0);
      uVar11 = (ulong)uVar4;
      if (uVar4 != 0xffffff80) {
        if (uVar4 == 0) {
          uVar4 = FUN_100184c93(&local_498,param_3[1]);
          goto LAB_10031931a;
        }
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          puVar13 = &local_4c8;
          local_4c8 = 0x8220202;
          local_4c4 = "Assertion failure";
          local_4bc = 0x400;
          local_4ba = (undefined2)uVar4;
          uStack_4b8 = (undefined2)(uVar4 >> 0x10);
          goto LAB_100319422;
        }
      }
    }
  }
switchD_100318a48_caseD_74646464:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar11;
  }
LAB_1003195ec:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

