// name: FUN_10062619a
// address: 10062619a

undefined8 FUN_10062619a(long param_1,char *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (char *)0x0) {
    uVar17 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar17,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inPID != 0";
      __os_log_error_impl(0x100000000,uVar17,0x10,
                          "**ERROR**: SocialProfileLookup::Setup() failed! status:%d",&local_58,0x16
                         );
    }
    FUN_1001782e9(0,0);
    uVar17 = 0xffffffce;
    goto LAB_100626712;
  }
  plVar1 = (long *)(param_1 + 0x48);
  plVar7 = (long *)FUN_1002b8060(plVar1);
  if (plVar7 == (long *)0x0) {
    if (DAT_1008c7d30 != -1) {
      _dispatch_once(&DAT_1008c7d30,&PTR___NSConcreteGlobalBlock_100871100);
    }
    uVar4 = DAT_1008c7d28;
    cVar5 = _os_log_type_enabled(DAT_1008c7d28,0x10);
    uVar17 = 0x2365;
    if (cVar5 != '\0') {
      local_58 = 0x8000100;
      local_54 = param_2;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "**ERROR**: DeleteSocialProfile - Profile PID %llu not found",&local_58,0xc);
    }
    goto LAB_100626712;
  }
  plVar8 = (long *)FUN_1003070df();
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8,0x74327270,plVar8,plVar7[3],0);
    *(byte *)((long)plVar8 + 0x1bb2) = *(byte *)((long)plVar8 + 0x1bb2) | 1;
  }
  FUN_1001b7a5c(&local_58,plVar7[3] + 0x20);
  uVar9 = FUN_1001bd420(&local_58);
  uVar14 = *(ulong *)(param_1 + 0x28);
  if (uVar14 != 0) {
    uVar13 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 >> 0x38 < 2) {
      uVar15 = uVar14 - 1 & uVar9;
    }
    else {
      uVar15 = uVar9;
      if (uVar14 <= uVar9) {
        uVar15 = uVar9 % uVar14;
      }
    }
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x20) + uVar15 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar2, plVar8 != (long *)0x0)) {
LAB_100626389:
      uVar10 = plVar8[1];
      if (uVar10 == uVar9) {
        iVar6 = FUN_1001b9c66(plVar8 + 2,&local_58);
        if (iVar6 != 0) goto LAB_1006263d9;
        lVar16 = *plVar8;
        uVar14 = plVar8[1];
        uVar9 = *(ulong *)(param_1 + 0x28);
        uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
        uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar13 >> 0x38 < 2) {
          uVar14 = uVar14 & uVar9 - 1;
        }
        else if (uVar9 <= uVar14) {
          uVar14 = uVar14 % uVar9;
        }
        plVar12 = *(long **)(*(long *)(param_1 + 0x20) + uVar14 * 8);
        do {
          plVar11 = plVar12;
          plVar12 = (long *)*plVar11;
        } while ((long *)*plVar11 != plVar8);
        bVar3 = (byte)(uVar13 >> 0x38);
        if (plVar11 == (long *)(param_1 + 0x30)) {
LAB_100626502:
          if (lVar16 == 0) {
LAB_10062652f:
            *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar14 * 8) = 0;
            lVar16 = *plVar8;
            goto LAB_10062653b;
          }
          uVar13 = *(ulong *)(lVar16 + 8);
          if (bVar3 < 2) {
            uVar15 = uVar9 - 1 & uVar13;
          }
          else {
            uVar15 = uVar13;
            if (uVar9 <= uVar13) {
              uVar15 = uVar13 % uVar9;
            }
          }
          if (uVar15 != uVar14) goto LAB_10062652f;
LAB_100626544:
          if (bVar3 < 2) {
            uVar13 = uVar13 & uVar9 - 1;
          }
          else if (uVar9 <= uVar13) {
            uVar13 = uVar13 % uVar9;
          }
          if (uVar13 != uVar14) {
            *(long **)(*(long *)(param_1 + 0x20) + uVar13 * 8) = plVar11;
            lVar16 = *plVar8;
          }
        }
        else {
          uVar13 = plVar11[1];
          if (bVar3 < 2) {
            uVar13 = uVar13 & uVar9 - 1;
          }
          else if (uVar9 <= uVar13) {
            uVar13 = uVar13 % uVar9;
          }
          if (uVar13 != uVar14) goto LAB_100626502;
LAB_10062653b:
          if (lVar16 != 0) {
            uVar13 = *(ulong *)(lVar16 + 8);
            goto LAB_100626544;
          }
          lVar16 = 0;
        }
        *plVar11 = lVar16;
        *plVar8 = 0;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
        FUN_1001b7a50(plVar8 + 2);
        operator_delete(plVar8);
      }
      else {
        if ((byte)(uVar13 >> 0x38) < 2) {
          uVar10 = uVar10 & uVar14 - 1;
        }
        else if (uVar14 <= uVar10) {
          uVar10 = uVar10 % uVar14;
        }
        if (uVar10 == uVar15) goto LAB_1006263d9;
      }
    }
  }
LAB_1006265a0:
  FUN_1001b7a50(&local_58);
  lVar16 = *plVar7;
  uVar14 = plVar7[1];
  uVar9 = *(ulong *)(param_1 + 0x50);
  uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar13 >> 0x38 < 2) {
    uVar14 = uVar14 & uVar9 - 1;
  }
  else if (uVar9 <= uVar14) {
    uVar14 = uVar14 % uVar9;
  }
  plVar8 = *(long **)(*plVar1 + uVar14 * 8);
  do {
    plVar12 = plVar8;
    plVar8 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar7);
  bVar3 = (byte)(uVar13 >> 0x38);
  if (plVar12 == (long *)(param_1 + 0x58)) {
LAB_100626680:
    if (lVar16 == 0) {
LAB_1006266ad:
      *(undefined8 *)(*plVar1 + uVar14 * 8) = 0;
      lVar16 = *plVar7;
      goto LAB_1006266b8;
    }
    uVar13 = *(ulong *)(lVar16 + 8);
    if (bVar3 < 2) {
      uVar15 = uVar9 - 1 & uVar13;
    }
    else {
      uVar15 = uVar13;
      if (uVar9 <= uVar13) {
        uVar15 = uVar13 % uVar9;
      }
    }
    if (uVar15 != uVar14) goto LAB_1006266ad;
LAB_1006266c1:
    if (bVar3 < 2) {
      uVar13 = uVar13 & uVar9 - 1;
    }
    else if (uVar9 <= uVar13) {
      uVar13 = uVar13 % uVar9;
    }
    if (uVar13 != uVar14) {
      *(long **)(*plVar1 + uVar13 * 8) = plVar12;
      lVar16 = *plVar7;
    }
  }
  else {
    uVar13 = plVar12[1];
    if (bVar3 < 2) {
      uVar13 = uVar13 & uVar9 - 1;
    }
    else if (uVar9 <= uVar13) {
      uVar13 = uVar13 % uVar9;
    }
    if (uVar13 != uVar14) goto LAB_100626680;
LAB_1006266b8:
    if (lVar16 != 0) {
      uVar13 = *(ulong *)(lVar16 + 8);
      goto LAB_1006266c1;
    }
    lVar16 = 0;
  }
  *plVar12 = lVar16;
  *plVar7 = 0;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
  FUN_100205d70(plVar7 + 3);
  operator_delete(plVar7);
  uVar17 = 0;
LAB_100626712:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar17;
LAB_1006263d9:
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) goto LAB_1006265a0;
  goto LAB_100626389;
}

