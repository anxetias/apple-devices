// name: FUN_10059cf64
// address: 10059cf64

void FUN_10059cf64(int param_1,ushort param_2,ulong param_3,ulong *param_4)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  undefined8 uVar8;
  size_t sVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  char local_60 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_3 & 0xfffff) == 0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(whichField & (((1ULL << 19) << 1) - 1)) != 0";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10059d027;
  }
  bVar14 = param_1 == 0x69506f64;
  if (0x3ff < (long)param_3) {
    if (0x7fff < (long)param_3) {
      if ((long)param_3 < 0x20000) {
        if (param_3 == 0x8000) {
          if (param_1 == 0x69506f64) {
            if ((ushort)(param_2 - 0x121) < 7) {
              *(undefined4 *)(param_4 + 0x72) = 1;
            }
            else {
              if (6 < (ushort)(param_2 - 0x135)) goto LAB_10059d570;
              *(undefined4 *)(param_4 + 0x72) = 2;
            }
            *(byte *)((long)param_4 + 0x2e5) = 1;
          }
          else {
LAB_10059d570:
            *(undefined4 *)(param_4 + 0x72) = 0;
          }
          *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x80;
        }
        else if (param_3 == 0x10000) {
          *(bool *)((long)param_4 + 0x307) = bVar14;
          *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 1;
        }
      }
      else if (param_3 == 0x20000) {
        *(bool *)(param_4 + 0x61) = bVar14;
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 2;
      }
      else if (param_3 == 0x40000) {
        lVar6 = FUN_10035cf53(param_4 + 0x81,0x61616320);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 4) = 1;
        }
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 4;
      }
      else if (param_3 == 0x80000) {
        lVar6 = FUN_10035cf53(param_4 + 0x81,0x616c6163);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 4) = 1;
        }
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 8;
      }
      goto LAB_10059d027;
    }
    if ((long)param_3 < 0x1000) {
      if (param_3 == 0x400) {
        bVar14 = false;
        if ((param_1 == 0x69506f64) && (bVar14 = false, *(byte *)((long)param_4 + 0x2e9) == 0)) {
          bVar14 = 0x13c < param_2 || (ushort)(param_2 - 0x133) < 9;
        }
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 4;
        uVar8 = 0x616c6163;
        goto LAB_10059d3ee;
      }
      if (param_3 != 0x800) goto LAB_10059d027;
      bVar14 = 0x113 < param_2;
      *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 8;
      bVar3 = *(byte *)((long)param_4 + 0x2e9);
      uVar8 = 0x61613220;
    }
    else {
      if (param_3 == 0x1000) {
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x10;
        bVar3 = *(byte *)((long)param_4 + 0x2e9);
        uVar8 = 0x61613320;
      }
      else {
        if (param_3 != 0x2000) {
          if (param_3 != 0x4000) goto LAB_10059d027;
          ((byte *)((long)param_4 + 0x366))[0] = 0;
          ((byte *)((long)param_4 + 0x366))[1] = 0;
          if (param_1 == 0x69506f64) {
            if ((ushort)(param_2 - 0x123) < 5) {
LAB_10059d0ad:
              *(undefined2 *)(param_4 + 0x6d) = 4;
            }
            else {
              if (6 < (ushort)(param_2 - 0x121)) {
                if ((ushort)(param_2 - 0x137) < 5) goto LAB_10059d0ad;
                if (6 < (ushort)(param_2 - 0x135)) {
                  if (((ushort)(param_2 - 0x11f) < 2) ||
                     (0x13c < param_2 || (ushort)(param_2 - 0x133) < 2)) {
                    *(undefined2 *)(param_4 + 0x6d) = 2;
                  }
                  else {
                    if (param_2 < 0x11e) goto LAB_10059db96;
                    *(undefined2 *)(param_4 + 0x6d) = 1;
                  }
                  goto LAB_10059db9f;
                }
              }
              *(undefined2 *)(param_4 + 0x6d) = 3;
            }
          }
          else {
LAB_10059db96:
            *(undefined2 *)(param_4 + 0x6d) = 0;
          }
LAB_10059db9f:
          *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x40;
          goto LAB_10059d027;
        }
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x20;
        bVar3 = *(byte *)((long)param_4 + 0x2e9);
        uVar8 = 0x61613420;
      }
      bVar14 = 0x113 < param_2;
    }
joined_r0x00010059d355:
    if (bVar3 == 0) {
      bVar14 = (bool)(param_1 == 0x69506f64 & bVar14);
LAB_10059d3ee:
      if (bVar14) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          FUN_10035d175(param_4 + 0x81);
          return;
        }
        goto LAB_10059dc52;
      }
    }
LAB_10059d423:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_10035d05f(param_4 + 0x81,uVar8);
      return;
    }
    goto LAB_10059dc52;
  }
  if (0x1f < (long)param_3) {
    if ((long)param_3 < 0x80) {
      if (param_3 == 0x20) {
        if (param_1 == 0x69506f64) {
          if ((0x131 < param_2) && (bVar3 = 1, *(int *)((long)param_4 + 0x234) != 3))
          goto LAB_10059d52b;
        }
        else {
          bVar3 = 0;
LAB_10059d52b:
          *(byte *)((long)param_4 + 0x2e2) = bVar3;
        }
        *(byte *)param_4 = (byte)*param_4 | 0x20;
        goto LAB_10059d027;
      }
      if (param_3 != 0x40) goto LAB_10059d027;
      *(byte *)param_4 = (byte)*param_4 | 0x40;
      bVar3 = *(byte *)((long)param_4 + 0x2e9);
      uVar8 = 0x61696666;
    }
    else if (param_3 == 0x80) {
      *(byte *)param_4 = (byte)*param_4 | 0x80;
      bVar3 = *(byte *)((long)param_4 + 0x2e9);
      uVar8 = 0x6d703320;
    }
    else {
      if (param_3 != 0x100) {
        if (param_3 == 0x200) {
          bVar14 = 0x11d < param_2;
          *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 2;
          bVar3 = *(byte *)((long)param_4 + 0x2e9);
          uVar8 = 0x61616320;
          goto joined_r0x00010059d355;
        }
        goto LAB_10059d027;
      }
      *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 1;
      bVar3 = *(byte *)((long)param_4 + 0x2e9);
      uVar8 = 0x77617665;
    }
    if (bVar3 == 0) goto LAB_10059d3ee;
    goto LAB_10059d423;
  }
  if ((long)param_3 < 8) {
    if (param_3 - 1 < 2) {
      if (param_1 == 0x69506f64) {
        FUN_1001c62d9(param_4 + 1,4);
        *(byte *)((long)param_4 + 9) = 0x80;
        if (param_2 < 0x10a) {
          ((byte *)((long)param_4 + 10))[0] = 0;
          ((byte *)((long)param_4 + 10))[1] = 1;
        }
        else if (param_2 < 0x114) {
          ((byte *)((long)param_4 + 10))[0] = 0x10;
          ((byte *)((long)param_4 + 10))[1] = 1;
        }
        else if (param_2 < 0x11e) {
          ((byte *)((long)param_4 + 10))[0] = 0x20;
          ((byte *)((long)param_4 + 10))[1] = 1;
        }
        else if (param_2 == 0x11e) {
          ((byte *)((long)param_4 + 10))[0] = 0x30;
          ((byte *)((long)param_4 + 10))[1] = 1;
        }
        else if (param_2 < 0x128) {
          ((byte *)((long)param_4 + 10))[0] = 0x31;
          ((byte *)((long)param_4 + 10))[1] = 1;
        }
        else if (param_2 < 0x132) {
          ((byte *)((long)param_4 + 10))[0] = 0;
          ((byte *)((long)param_4 + 10))[1] = 2;
        }
        else if (param_2 == 0x132) {
          ((byte *)((long)param_4 + 10))[0] = 0x10;
          ((byte *)((long)param_4 + 10))[1] = 2;
        }
        else if (param_2 < 0x13c) {
          ((byte *)((long)param_4 + 10))[0] = 0x11;
          ((byte *)((long)param_4 + 10))[1] = 2;
        }
        else {
          *(byte *)((long)param_4 + 0xb) = 2;
          if (param_2 == 0x13c) {
            *(byte *)((long)param_4 + 10) = 0x20;
          }
          else {
            *(byte *)((long)param_4 + 10) = 0x21;
          }
        }
        *param_4 = *param_4 | param_3;
      }
    }
    else if ((param_3 == 4) && (param_1 == 0x69506f64)) {
      iVar5 = 1;
      if (0x127 < param_2) {
        iVar5 = (uint)(param_2 < 0x13c) * 2;
      }
      *(int *)((long)param_4 + 0xc) = iVar5;
      *(byte *)param_4 = (byte)*param_4 | 4;
    }
    goto LAB_10059d027;
  }
  if (param_3 == 8) {
    if (param_1 == 0x69506f64) {
      iVar5 = 1;
      if (0x127 < param_2) {
        iVar5 = (uint)(param_2 < 0x13c) * 2;
      }
    }
    else {
      iVar5 = FUN_10059ccd3((byte *)((long)param_4 + 0xb6));
    }
    *(int *)((long)param_4 + 0x234) = iVar5;
    *(byte *)param_4 = (byte)*param_4 | 8;
    goto LAB_10059d027;
  }
  if (param_3 != 0x10) goto LAB_10059d027;
  bVar3 = *(byte *)((long)param_4 + 0x2b9);
  bVar12 = *(byte *)((long)param_4 + 0x2ba);
  sVar7 = _strlen((char *)((long)param_4 + 0xf4));
  if ((sVar7 < 0xd) && ((0x1c01UL >> (sVar7 & 0x3f) & 1) != 0)) {
    if (1 < sVar7 - 0xb) goto LAB_10059d5ce;
    FUN_1001dfbb3((byte *)((long)param_4 + 0xfc),local_60,8);
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "serialNumberLength == 0 || serialNumberLength == 10 || serialNumberLength == 11 || serialNumberLength == 12"
      ;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10059d5ce:
    local_60[0] = '\0';
  }
  uVar2 = *(uint *)((long)param_4 + 0x234);
  if ((int)uVar2 < 0x85) {
    switch(uVar2) {
    case 3:
      pbVar10 = &DAT_10086e260;
      bVar12 = bVar3;
      break;
    case 4:
      pbVar10 = &DAT_10086e240;
      bVar12 = bVar3;
      break;
    case 5:
      pbVar10 = &DAT_10086e2e0;
      bVar12 = bVar3;
      break;
    case 6:
      pbVar10 = &DAT_10086e320;
      bVar12 = bVar3;
      break;
    case 7:
      pbVar10 = &DAT_10086e300;
      bVar12 = bVar3;
      break;
    case 8:
    case 10:
    case 0xd:
    case 0xe:
      goto switchD_10059d5fc_caseD_2713;
    case 9:
      pbVar10 = &DAT_10086e350;
      bVar12 = bVar3;
      break;
    case 0xb:
      pbVar10 = &DAT_10086e4b0;
      bVar12 = bVar3;
      break;
    case 0xc:
      pbVar10 = &DAT_10086e500;
      bVar12 = bVar3;
      break;
    case 0xf:
      pbVar10 = &DAT_10086e5a0;
      bVar12 = bVar3;
      break;
    case 0x10:
      pbVar10 = &DAT_10086e720;
      bVar12 = bVar3;
      break;
    case 0x11:
      pbVar10 = &DAT_10086e7c0;
      bVar12 = bVar3;
      break;
    case 0x12:
      pbVar10 = &DAT_10086e990;
      bVar12 = bVar3;
      break;
    default:
      if (uVar2 == 0x82) {
        pbVar10 = &DAT_10086e3c0;
        bVar12 = bVar3;
      }
      else {
        if (uVar2 != 0x84) goto switchD_10059d5fc_caseD_2713;
        pbVar10 = &DAT_10086e640;
        bVar12 = bVar3;
      }
    }
    goto LAB_10059d900;
  }
  switch(uVar2) {
  case 0x2712:
    pbVar10 = &DAT_10086e570;
    bVar12 = bVar3;
    break;
  case 0x2713:
  case 0x2715:
  case 0x2716:
  case 0x272d:
  case 0x272e:
  case 0x272f:
  case 0x2735:
switchD_10059d5fc_caseD_2713:
    bVar14 = true;
    pbVar10 = (byte *)0x0;
    goto LAB_10059d70b;
  case 0x2714:
    pbVar10 = &DAT_10086e6b0;
    bVar12 = bVar3;
    break;
  case 0x2717:
    pbVar10 = &DAT_10086e6e0;
    bVar12 = bVar3;
    break;
  case 0x2718:
  case 0x271f:
    pbVar10 = &DAT_10086ea90;
    bVar14 = false;
LAB_10059d70b:
    switch(uVar2) {
    case 0x2725:
    case 0x2747:
      bVar15 = bVar3 != 10;
      bVar3 = 0x16;
      if (bVar12 != 2 || bVar15) {
        bVar3 = bVar12;
      }
      break;
    default:
      bVar12 = bVar3;
      if (!bVar14) goto LAB_10059d900;
      bVar12 = 1;
      if (9999 < uVar2) goto LAB_10059d735;
      goto LAB_10059da88;
    case 0x272c:
    case 0x2733:
    case 0x2734:
    case 0x2736:
    case 0x273a:
    case 0x273b:
    case 0x273c:
    case 0x273d:
    case 0x273e:
    case 0x273f:
    case 0x2742:
    case 0x2743:
    case 0x2744:
    case 0x2745:
    case 0x2746:
    case 0x2748:
    case 0x2749:
    case 0x274a:
    case 0x274b:
    case 0x274c:
    case 0x274d:
    case 0x274e:
    case 0x274f:
    case 0x2750:
    case 0x2751:
    case 0x2752:
    case 0x2753:
    case 0x2754:
    case 0x2755:
    case 0x2756:
    case 0x2757:
    case 0x2758:
    case 0x2759:
    case 0x275a:
    case 0x2761:
    case 0x2762:
    case 0x2774:
    case 0x2775:
    case 0x2776:
    case 0x2777:
    case 0x2778:
    case 0x277c:
    case 0x277d:
    case 0x277f:
    case 0x2780:
    case 0x2781:
    case 0x2782:
    case 0x2787:
    case 0x2788:
    case 0x2789:
    case 0x278a:
    case 0x278b:
    case 0x278c:
    case 0x278d:
    case 0x278e:
    case 0x278f:
    case 0x2790:
    case 0x2791:
    case 0x2792:
switchD_10059d728_caseD_272c:
      bVar3 = bVar12;
      break;
    case 0x275b:
    case 0x275c:
    case 0x275d:
    case 0x275e:
    case 0x275f:
    case 0x2760:
    case 0x2763:
    case 0x2764:
    case 0x2765:
    case 0x2766:
    case 0x2767:
    case 0x2768:
    case 0x2769:
    case 0x2779:
    case 0x277a:
    case 0x277b:
    case 0x277e:
    case 0x2783:
    case 0x2784:
    case 0x2785:
    case 0x2786:
      if (bVar12 != 0) goto switchD_10059d728_caseD_272c;
      bVar15 = bVar3 == 10;
      bVar3 = 2;
      if (bVar15) {
        bVar3 = 0x17;
      }
    }
    bVar12 = bVar3;
    if (!bVar14) break;
LAB_10059d735:
    bVar12 = 10;
    if (bVar3 != 0) {
      bVar12 = bVar3;
    }
    goto LAB_10059da88;
  case 0x2719:
    pbVar10 = &DAT_10086ead0;
    bVar12 = bVar3;
    break;
  case 0x271a:
    pbVar10 = &DAT_10086eb10;
    bVar12 = bVar3;
    break;
  case 0x271b:
    pbVar10 = &DAT_10086eb90;
    bVar12 = bVar3;
    break;
  case 0x271c:
    pbVar10 = &DAT_10086ebe0;
    bVar12 = bVar3;
    break;
  case 0x271d:
    pbVar10 = &DAT_10086ec60;
    bVar12 = bVar3;
    break;
  case 0x271e:
    pbVar10 = &DAT_10086ec90;
    bVar12 = bVar3;
    break;
  case 0x2720:
    pbVar10 = &DAT_10086ec30;
    bVar12 = bVar3;
    break;
  case 0x2721:
    pbVar10 = &DAT_10086ecc0;
    bVar12 = bVar3;
    break;
  case 0x2722:
    pbVar10 = &DAT_10086eb60;
    bVar12 = bVar3;
    break;
  case 0x2723:
    pbVar10 = &DAT_10086ecf0;
    bVar12 = bVar3;
    break;
  case 0x2724:
    pbVar10 = &DAT_10086ed20;
    bVar12 = bVar3;
    break;
  case 0x2725:
    bVar11 = 0x16;
    if (bVar12 != 2 || bVar3 != 10) {
      bVar11 = bVar12;
    }
    pbVar10 = &DAT_10086ed50;
    bVar12 = bVar11;
    break;
  case 0x2726:
    pbVar10 = &DAT_10086ee60;
    bVar12 = bVar3;
    break;
  case 0x2727:
    pbVar10 = &DAT_10086ee90;
    bVar12 = bVar3;
    break;
  case 0x2728:
    pbVar10 = &DAT_10086eec0;
    bVar12 = bVar3;
    break;
  case 0x2729:
    pbVar10 = &DAT_10086edd0;
    bVar12 = bVar3;
    break;
  case 0x272a:
    pbVar10 = &DAT_10086ee00;
    bVar12 = bVar3;
    break;
  case 0x272b:
    pbVar10 = &DAT_10086ee30;
    bVar12 = bVar3;
    break;
  case 0x272c:
    pbVar10 = &DAT_10086eef0;
    break;
  case 0x2730:
    pbVar10 = &DAT_10086eff0;
    bVar12 = bVar3;
    break;
  case 0x2731:
    pbVar10 = &DAT_10086f020;
    bVar12 = bVar3;
    break;
  case 0x2732:
  case 0x2737:
  case 0x2738:
  case 0x2739:
    pbVar10 = &DAT_10075a310;
    bVar12 = bVar3;
    break;
  case 0x2733:
    pbVar10 = &DAT_10086efb0;
    break;
  case 0x2734:
    pbVar10 = &DAT_10075a300;
    break;
  case 0x2736:
    pbVar10 = &DAT_10086ef50;
    break;
  default:
    if (uVar2 != 0x85) goto switchD_10059d5fc_caseD_2713;
    pbVar10 = &DAT_10086e840;
    bVar12 = bVar3;
  }
LAB_10059d900:
  sVar7 = _strlen(local_60);
  if (sVar7 - 3 < 2) {
    pcVar13 = *(char **)(pbVar10 + 8);
    if (pcVar13 != (char *)0x0) {
      while( true ) {
        bVar3 = pbVar10[1];
        if (1 < (byte)(bVar3 - 3)) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "colorMap->configCodeLength == 3 || colorMap->configCodeLength == 4";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          bVar3 = pbVar10[1];
        }
        sVar9 = _strlen(pcVar13);
        if (sVar9 % (ulong)bVar3 != 0) break;
        if (sVar7 == bVar3) {
          cVar4 = *pcVar13;
          while (cVar4 != '\0') {
            cVar4 = FUN_1001df8db(local_60,sVar7,pcVar13,sVar7,1);
            if (cVar4 != '\0') goto LAB_10059da85;
            pcVar1 = pcVar13 + sVar7;
            pcVar13 = pcVar13 + sVar7;
            cVar4 = *pcVar1;
          }
        }
        pcVar13 = *(char **)(pbVar10 + 0x18);
        pbVar10 = pbVar10 + 0x10;
        if (pcVar13 == (char *)0x0) goto LAB_10059da7c;
      }
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(strlen(configCodes) % colorMap->configCodeLength) == 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_10059da7c:
    if (bVar12 == 0) {
LAB_10059da85:
      bVar12 = *pbVar10;
    }
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "configCodeLength == 3 || configCodeLength == 4";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    bVar12 = 0;
  }
LAB_10059da88:
  *(byte *)(param_4 + 0x57) = bVar12;
  *(byte *)param_4 = (byte)*param_4 | 0x10;
LAB_10059d027:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_10059dc52:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

