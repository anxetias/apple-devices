// name: FUN_1002cf17c
// address: 1002cf17c

undefined8 FUN_1002cf17c(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  float fVar11;
  undefined1 local_278 [16];
  uint local_268 [4];
  uint local_258 [4];
  uint local_248 [4];
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "trackInstance != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    goto switchD_1002cf1df_caseD_13;
  }
  lVar9 = *(long *)(param_2 + 8);
  if ((param_4 & 1) != 0) {
    if (0x67 < param_3) {
      if (param_3 < 200) {
        if (param_3 != 0x68) {
          if (param_3 == 0xc2) goto LAB_1002cf435;
          if (param_3 == 199) goto LAB_1002cf312;
          goto code_r0x0001002cf1d1;
        }
        FUN_10047c10c(&local_238,lVar9);
        FUN_1001b80b2(param_1,&local_238);
      }
      else {
        if (param_3 < 0xf2) {
          if (param_3 != 200) {
            if (param_3 == 0xf1) goto LAB_1002cf312;
            goto code_r0x0001002cf1d1;
          }
LAB_1002cf435:
          FUN_100478401(lVar9,&local_238);
          FUN_1001b8dfc(local_248,&local_238);
          FUN_1001b80b2(param_1,local_248);
          FUN_1001b7a50(local_248);
          cVar4 = FUN_1001b8428(param_1);
          if (cVar4 == '\0') goto switchD_1002cf1df_caseD_13;
          FUN_100477dec(lVar9,&local_238);
          FUN_1001b8dfc(local_248,&local_238);
          FUN_1001b80b2(param_1,local_248);
          goto LAB_1002d0ba9;
        }
        if (param_3 == 0xf2) {
          if ((**(byte **)(lVar9 + 0x70) & 4) == 0) {
            FUN_100476dff(&local_238,lVar9);
            FUN_1001b80b2(param_1,&local_238);
          }
          else {
            FUN_1004796a8(&local_238,lVar9,1);
            FUN_1001b80b2(param_1,&local_238);
          }
        }
        else {
          if (param_3 != 0xf3) goto code_r0x0001002cf1d1;
          uVar8 = FUN_1004744bf(lVar9,0);
          if ((uVar8 & 0x40) == 0) {
            FUN_100476dff(&local_238,lVar9);
            FUN_1001b80b2(param_1,&local_238);
          }
          else {
            FUN_10047e068(&local_238,lVar9);
            FUN_1001b80b2(param_1,&local_238);
          }
        }
      }
      goto LAB_1002d0c58;
    }
    if (param_3 < 0x12) {
      if (param_3 == 2) {
LAB_1002cf312:
        if (((**(byte **)(lVar9 + 0x70) & 4) != 0) && (param_3 == 0xf1 || (param_4 & 4) != 0)) {
          FUN_100479d23(&local_238,lVar9);
          FUN_1001b80b2(param_1,&local_238);
          goto LAB_1002d0c58;
        }
        local_238 = local_238 & 0xffff0000;
        FUN_100476e65(lVar9);
        FUN_1001b8dfc(local_248,&local_238);
        FUN_1001b80b2(param_1,local_248);
      }
      else if (param_3 == 3) {
        FUN_1004777d6(lVar9,&local_238);
        FUN_1001b8dfc(local_248,&local_238);
        FUN_1001b80b2(param_1,local_248);
      }
      else {
        if (param_3 != 4) goto code_r0x0001002cf1d1;
        FUN_100477dec(lVar9,&local_238);
        FUN_1001b8dfc(local_248,&local_238);
        FUN_1001b80b2(param_1,local_248);
      }
    }
    else if (param_3 == 0x12) {
      FUN_10047a452(lVar9,&local_238);
      FUN_1001b8dfc(local_248,&local_238);
      FUN_1001b80b2(param_1,local_248);
    }
    else if (param_3 == 0x3e) {
      FUN_10047e0c8(lVar9,&local_238);
      FUN_1001b8dfc(local_248,&local_238);
      FUN_1001b80b2(param_1,local_248);
    }
    else {
      if (param_3 != 0x47) goto code_r0x0001002cf1d1;
      FUN_100478401(lVar9,&local_238);
      FUN_1001b8dfc(local_248,&local_238);
      FUN_1001b80b2(param_1,local_248);
    }
LAB_1002d0ba9:
    puVar10 = local_248;
    goto LAB_1002d0c5f;
  }
code_r0x0001002cf1d1:
  switch(param_3) {
  case 2:
  case 199:
  case 0xf1:
    if (((**(byte **)(lVar9 + 0x70) & 4) == 0) || (param_3 != 0xf1 && (param_4 & 4) == 0)) {
      FUN_100476ac1(&local_238,lVar9);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_100479b4b(&local_238,lVar9);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 3:
    FUN_10047745d(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 4:
    FUN_100477b45(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 5:
    if (*(char *)(param_2 + 0x45) == '\x02') {
      FUN_1001c334a(&local_238,0x2328000c);
      FUN_1001b80b2(param_1,&local_238);
    }
    else if (*(short *)(param_2 + 0x54) == 0) {
      if ((*(byte *)(lVar9 + 0xc4) & 0x80) != 0) goto switchD_1002cf1df_caseD_13;
      FUN_1001c334a(&local_238,0x2328000d);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_1005373cf(&local_238,*(short *)(param_2 + 0x54),*(uint *)(param_2 + 0x48) >> 0xc & 1);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 6:
    if (*(char *)(param_2 + 0x45) == '\x02') {
      FUN_1001c334a(&local_238,0x2328000c);
      FUN_1001b80b2(param_1,&local_238);
    }
    else if ((*(float *)(param_2 + 0x50) != 0.0) || (NAN(*(float *)(param_2 + 0x50)))) {
      FUN_100537278(&local_238);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      if ((*(byte *)(lVar9 + 0xc4) & 0x80) != 0) goto switchD_1002cf1df_caseD_13;
      FUN_1001c334a(&local_238,0x2328000d);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 7:
    if (*(short *)(lVar9 + 0x142) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001e7e2d(&local_238);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 8:
    FUN_10047a755(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 9:
    FUN_10047ac43(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 10:
    FUN_1002d17e8(&local_238,*(undefined4 *)(param_2 + 0x5c),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xb:
    if (*(short *)(lVar9 + 0x136) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b7a44(&local_238);
    FUN_1001b8e86(local_248,*(undefined2 *)(lVar9 + 0x136),1);
    FUN_1001b80b2(&local_238,local_248);
    FUN_1001b7a50(local_248);
    if (*(ushort *)(lVar9 + 0x138) < *(ushort *)(lVar9 + 0x136)) {
      FUN_1001b8e86(local_248,*(ushort *)(lVar9 + 0x136),1);
      FUN_1001b80b2(param_1,local_248);
      goto LAB_1002d0220;
    }
    FUN_1001c334a(local_258,0x23280012);
    FUN_1001b8e86(local_268,*(undefined2 *)(lVar9 + 0x136),1);
    FUN_1001b8e86(local_278,*(undefined2 *)(lVar9 + 0x138),1);
    FUN_1001bbf68(local_248,local_258,local_268,local_278);
    FUN_1001b80b2(param_1,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_278);
    FUN_1001b7a50(local_268);
    puVar10 = local_258;
    goto LAB_1002d0c53;
  case 0xc:
    if (*(char *)(param_2 + 0x45) == '\x02') {
      FUN_1001c334a(&local_238,0x2328000c);
      FUN_1001b80b2(param_1,&local_238);
    }
    else if (*(long *)(param_2 + 0x68) == 0) {
      if ((((*(byte *)(lVar9 + 0xc3) & 8) != 0) ||
          (uVar8 = FUN_100474dd0(lVar9,0), (uVar8 & 0x200004) != 0)) ||
         ((*(byte *)(lVar9 + 0xc4) & 0x80) != 0)) goto switchD_1002cf1df_caseD_13;
      FUN_1001c334a(&local_238,0x2328000f);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_1001e17d3(&local_238,*(long *)(param_2 + 0x68),0,0);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 0xd:
    if (*(char *)(param_2 + 0x45) == '\x02') {
      FUN_1001c334a(&local_238,0x2328000c);
      FUN_1001b80b2(param_1,&local_238);
    }
    else if (*(int *)(param_2 + 0x70) == 0) {
      if (*(int *)(param_2 + 100) == 0) {
        if ((*(char *)(param_2 + 0x45) == '\0') && ((*(uint *)(lVar9 + 0xc2) & 0x800800) == 0)) {
          if ((*(int *)(param_2 + 0x3c) == 0x53485244) || (*(int *)(param_2 + 0x3c) == 0x48545450))
          {
            FUN_1001c334a(&local_238,0x23280010);
            FUN_1001b80b2(param_1,&local_238);
          }
          else {
            FUN_1001c334a(&local_238,0x2328000e);
            FUN_1001b80b2(param_1,&local_238);
          }
        }
        else {
          FUN_1001b7a44(&local_238);
          FUN_1001b80b2(param_1,&local_238);
        }
      }
      else {
        FUN_1001e1bd8(&local_238,*(int *)(param_2 + 100),0);
        FUN_1001b80b2(param_1,&local_238);
      }
    }
    else {
      FUN_1001e273e(&local_238,*(int *)(param_2 + 0x70),0);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 0xe:
    FUN_10047b5fa(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xf:
    FUN_1002b40a1(param_2,param_1);
    goto switchD_1002cf1df_caseD_13;
  case 0x10:
    FUN_1002d17e8(&local_238,*(undefined4 *)(param_2 + 0x60),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x11:
    FUN_10047b2a7(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x12:
    FUN_10047a072(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  default:
    goto switchD_1002cf1df_caseD_13;
  case 0x14:
    uVar1 = *(ushort *)(param_2 + 0x5a);
    if ((uVar1 == 0) || (uVar1 == 0xffff)) goto switchD_1002cf1df_caseD_13;
    fVar11 = (float)_log10f(SQRT(DAT_100717f3c / (float)uVar1));
    FUN_1001e6d8a(fVar11 * DAT_100740ce0,&local_238);
    FUN_1001c334a(local_258,0x23280015);
    FUN_1001bbec4(local_248,local_258,&local_238);
    FUN_1001b80b2(param_1,local_248);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_258);
    FUN_1001df366(local_248,param_1);
    FUN_1001b80b2(param_1,local_248);
LAB_1002d0220:
    puVar10 = local_248;
LAB_1002d0c53:
    FUN_1001b7a50(puVar10);
    break;
  case 0x15:
    FUN_10047d846(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x16:
    if (*(int *)(lVar9 + 0x144) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b8e86(&local_238,*(int *)(lVar9 + 0x144),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x17:
    FUN_1002d17e8(&local_238,*(undefined4 *)(lVar9 + 0x14c),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x18:
    uVar1 = *(ushort *)(lVar9 + 0x13a);
    if (uVar1 == 0) goto switchD_1002cf1df_caseD_13;
    if (uVar1 <= *(ushort *)(lVar9 + 0x13c)) {
      FUN_1001c334a(local_248,0x23280013);
      FUN_1001b8e86(local_258,*(undefined2 *)(lVar9 + 0x13a),1);
      FUN_1001b8e86(local_268,*(undefined2 *)(lVar9 + 0x13c),1);
      FUN_1001bbf68(&local_238,local_248,local_258,local_268);
      FUN_1001b80b2(param_1,&local_238);
LAB_1002d0b85:
      FUN_1001b7a50(&local_238);
      puVar10 = local_268;
      goto LAB_1002d0b98;
    }
    FUN_1001b8e86(&local_238,uVar1,1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x19:
    FUN_1002d1806(&local_238,(int)*(char *)(lVar9 + 300),param_4);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x1d:
  case 0x7d:
    cVar4 = FUN_1004746c0(lVar9);
    if (cVar4 != '\0') goto switchD_1002cf1df_caseD_13;
    local_248[0] = CONCAT22(local_248[0]._2_2_,0x2713);
    FUN_1001b7e14(&local_238,local_248,1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x20:
    FUN_1002d17e8(&local_238,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x88),0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x22:
    uVar3 = *(uint *)(*(long *)(param_2 + 0x10) + 0x8c);
    if (uVar3 < 0x186a1) goto switchD_1002cf1df_caseD_13;
    uVar7 = 0x40;
    if ((param_4 & 0x20) == 0) {
      uVar7 = 2;
    }
    FUN_1001e2489(&local_238,uVar3,uVar7);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x23:
    if (*(short *)(lVar9 + 0x15c) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b8e86(&local_238,*(short *)(lVar9 + 0x15c),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x27:
    FUN_1004789a9(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x29:
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) ||
       (*(long *)(*(long *)(param_2 + 0x10) + 0x38) == 0)) goto switchD_1002cf1df_caseD_13;
    FUN_1002b447b(&local_238,param_2);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x36:
    FUN_10047c176(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x37:
    FUN_10047ce78(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x3e:
    FUN_10047de21(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x3f:
    if (*(int *)(*(long *)(lVar9 + 0x78) + 0x34) == 0) {
      if (*(int *)(*(long *)(lVar9 + 0x78) + 0xc) != 0) {
        FUN_1001c334a(local_248,((param_4 >> 10 & 1) != 0) + 0x23280018);
        FUN_1001b8e86(local_258,*(undefined4 *)(*(long *)(lVar9 + 0x78) + 0xc),1);
        FUN_1001bbec4(&local_238,local_248,local_258);
        FUN_1001b80b2(param_1,&local_238);
        goto LAB_1002d0a91;
      }
      FUN_1001c334a(&local_238,0x23280048);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_10047e3cd(&local_238,lVar9);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 0x40:
    FUN_10047e722(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x41:
    fVar11 = *(float *)(*(long *)(lVar9 + 0x78) + 8);
    if ((fVar11 != 0.0) || (NAN(fVar11))) {
      FUN_1001bb614(&local_238,1);
      FUN_1001b80b2(param_1,&local_238);
      FUN_1001b7a50(&local_238);
      FUN_1001b7b04(local_248,".0");
      FUN_1001b7b04(local_258,"");
      FUN_1001ba564(&local_238,param_1,local_248,local_258);
      FUN_1001b80b2(param_1,&local_238);
LAB_1002d0a91:
      puVar10 = &local_238;
LAB_1002d0b98:
      FUN_1001b7a50(puVar10);
      puVar10 = local_258;
      goto LAB_1002d0ba4;
    }
    iVar2 = *(int *)(*(long *)(lVar9 + 0x78) + 4);
    if (iVar2 == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b8e86(&local_238,iVar2,1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x44:
    if (*(int *)(lVar9 + 0x150) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b8e86(&local_238,*(int *)(lVar9 + 0x150),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x45:
    FUN_1002d17e8(&local_238,*(undefined4 *)(lVar9 + 0x158),1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x47:
    FUN_100477fc2(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x4d:
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto switchD_1002cf1df_caseD_13;
    FUN_1003a0c1e(&local_238,*(long *)(lVar9 + 0x28),0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x4e:
    FUN_100476d7c(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x4f:
    FUN_10047774a(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x50:
    FUN_100477cff(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x51:
    FUN_100478315(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x52:
    FUN_10047a3c6(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x53:
    FUN_10047dfdc(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x55:
    FUN_10047d1cb(&local_238,lVar9,PTR_cf_podcast_feed_url_100844b30);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x59:
    FUN_10047bca2(local_248,lVar9);
    FUN_10057b498(&local_238,local_248);
    FUN_1001b80b2(param_1,&local_238);
    puVar10 = &local_238;
LAB_1002d0ba4:
    FUN_1001b7a50(puVar10);
    goto LAB_1002d0ba9;
  case 0x5a:
    FUN_1002d1806(&local_238,0,param_4);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x5b:
    uVar6 = FUN_1003186de(lVar9);
    FUN_1001e2489(&local_238,uVar6,0x1e);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x68:
    FUN_10047c10c(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x6f:
    if (*(long *)(lVar9 + 400) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b90b6(&local_238);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x72:
    if (*(long *)(lVar9 + 0x178) == 0) goto switchD_1002cf1df_caseD_13;
    FUN_1001b90b6(&local_238);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x77:
    FUN_100313a34(&local_238,param_2);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x7b:
    FUN_100313a94(&local_238,param_2);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x7c:
    FUN_10047b94d(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x80:
    FUN_100313dab(&local_238,param_2,0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x81:
    lVar9 = FUN_1002af980(param_2);
    if (lVar9 == 0) goto switchD_1002cf1df_caseD_13;
    uVar7 = FUN_1002af980(param_2);
    FUN_1001b90b6(&local_238,uVar7);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x84:
    lVar9 = FUN_1002afe3f(param_2);
    if (lVar9 == 0) goto switchD_1002cf1df_caseD_13;
    uVar7 = FUN_1002afe3f(param_2);
    FUN_1001b90b6(&local_238,uVar7);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x88:
    if (*(char *)(param_2 + 0x45) == '\x02') {
      FUN_1001c334a(&local_238,0x2328000c);
      FUN_1001b80b2(param_1,&local_238);
    }
    else if (*(short *)(param_2 + 0x56) == 0) {
      if ((*(byte *)(lVar9 + 0xc4) & 0x80) != 0) goto switchD_1002cf1df_caseD_13;
      FUN_1001c334a(&local_238,0x2328000d);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_1001b8e86(&local_238,*(short *)(param_2 + 0x56),1);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 0x89:
    lVar9 = FUN_1002afd8b(param_2);
    if (lVar9 == 0) goto switchD_1002cf1df_caseD_13;
    uVar7 = FUN_1002afd8b(param_2);
    FUN_1001b90b6(&local_238,uVar7);
    FUN_1001bbcfe(param_1,&local_238);
    break;
  case 0x8a:
    FUN_1001b82d4(param_1,"None",4);
    goto switchD_1002cf1df_caseD_13;
  case 0x90:
    FUN_1002b57b4(&local_238,param_2,0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x91:
    FUN_1002b5c3e(&local_238,param_2,0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x94:
    FUN_1002b59f7(&local_238,param_2,0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x95:
    FUN_1002b5e83(&local_238,param_2,0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x96:
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(param_2 + 0x20) + 0x18));
    FUN_1001b80b2(param_1,&local_238);
    FUN_1001b7a50(&local_238);
    FUN_1001b7b04(&local_238,", ");
    FUN_1001bbcfe(param_1,&local_238);
    FUN_1001b7a50(&local_238);
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(param_2 + 0x20) + 0x19));
    FUN_1001bbcfe(param_1,&local_238);
    FUN_1001b7a50(&local_238);
    FUN_1001b7b04(&local_238,", ");
    FUN_1001bbcfe(param_1,&local_238);
    FUN_1001b7a50(&local_238);
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(param_2 + 0x20) + 0x1a));
    FUN_1001bbcfe(param_1,&local_238);
    break;
  case 0x97:
    FUN_1001b90b6(&local_238,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x98:
    FUN_1001b90b6(&local_238,**(byte **)(param_2 + 0x20) >> 3 & 1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x99:
    FUN_1001b90b6(&local_238,*(ushort *)(lVar9 + 0xc6) >> 7 & 1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x9a:
    uVar5 = FUN_1004817dc(lVar9,0);
    FUN_1001b90b6(&local_238,uVar5);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x9b:
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(param_2 + 0x20) + 0x1b));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x9c:
    uVar5 = FUN_10030c70d(lVar9,0);
    FUN_1001b90b6(&local_238,uVar5);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0x9f:
    FUN_100478e72(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa0:
    FUN_100479353(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa1:
    uVar1 = *(ushort *)(*(long *)(lVar9 + 0x70) + 0x10);
    if (uVar1 == 0) goto switchD_1002cf1df_caseD_13;
    if (uVar1 <= *(ushort *)(*(long *)(lVar9 + 0x70) + 0x12)) {
      FUN_1001c334a(local_248,0x23280014);
      FUN_1001b8e86(local_258,*(undefined2 *)(*(long *)(lVar9 + 0x70) + 0x10),1);
      FUN_1001b8e86(local_268,*(undefined2 *)(*(long *)(lVar9 + 0x70) + 0x12),1);
      FUN_1001bbf68(&local_238,local_248,local_258,local_268);
      FUN_1001b80b2(param_1,&local_238);
      goto LAB_1002d0b85;
    }
    FUN_1001b8e86(&local_238,uVar1,1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa4:
    FUN_1001b90b6(&local_238,*(uint *)(param_2 + 0x48) >> 0x14 & 1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa5:
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(lVar9 + 0x78) + 0x20));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa6:
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(lVar9 + 0x78) + 0x21));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa7:
    FUN_1001b90b6(&local_238,*(undefined1 *)(*(long *)(lVar9 + 0x78) + 0x22));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa8:
    FUN_10047ec11(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xa9:
    iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x90);
    if (iVar2 == 0) goto switchD_1002cf1df_caseD_13;
    uVar7 = 0x40;
    if ((param_4 & 0x20) == 0) {
      uVar7 = 2;
    }
    FUN_1001e2489(&local_238,iVar2,uVar7);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xaa:
    FUN_1001bb56c(&local_238,*(undefined1 *)(param_2 + 0x4d));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xab:
    FUN_1001bb536(&local_238,*(uint *)(lVar9 + 0xc2) >> 0xd & 1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xb5:
    FUN_1001b90b6(&local_238,*(uint *)(param_2 + 0x48) >> 0x15 & 1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xb6:
    FUN_1001b90b6(&local_238,*(uint *)(param_2 + 0x48) >> 0x17 & 1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xb7:
    FUN_1004817dc(lVar9,local_248);
    FUN_1002d17e8(&local_238,local_248[0],0);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xba:
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto switchD_1002cf1df_caseD_13;
    uVar6 = FUN_1003a2058();
    FUN_1002d17e8(&local_238,uVar6,1);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xbc:
    FUN_10047e3cd(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xbd:
    FUN_1001b90b6(&local_238,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xbe:
    FUN_1001b90b6(&local_238,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xc2:
  case 200:
    FUN_100477fc2(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    FUN_1001b7a50(&local_238);
    cVar4 = FUN_1001b8428(param_1);
    if (cVar4 == '\0') goto switchD_1002cf1df_caseD_13;
    FUN_100477b45(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xc3:
    FUN_1004783a1(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    FUN_1001b7a50(&local_238);
    cVar4 = FUN_1001b8428(param_1);
    if (cVar4 == '\0') goto switchD_1002cf1df_caseD_13;
    FUN_100477d8c(&local_238,lVar9);
    FUN_1001b80b2(param_1,&local_238);
    break;
  case 0xf2:
    if ((**(byte **)(lVar9 + 0x70) & 4) == 0) {
      FUN_100476ac1(&local_238,lVar9);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_1004796a8(&local_238,lVar9,0);
      FUN_1001b80b2(param_1,&local_238);
    }
    break;
  case 0xf3:
    uVar8 = FUN_1004744bf(lVar9,0);
    if ((uVar8 & 0x40) == 0) {
      FUN_100476ac1(&local_238,lVar9);
      FUN_1001b80b2(param_1,&local_238);
    }
    else {
      FUN_10047de21(&local_238,lVar9);
      FUN_1001b80b2(param_1,&local_238);
    }
  }
LAB_1002d0c58:
  puVar10 = &local_238;
LAB_1002d0c5f:
  FUN_1001b7a50(puVar10);
switchD_1002cf1df_caseD_13:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

