// name: FUN_1003d1f2a
// address: 1003d1f2a

int FUN_1003d1f2a(long param_1,undefined4 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar14 = operator_new(0x4f0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar14 == (undefined4 *)0x0) {
    uVar15 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar15,0x10);
    if (cVar12 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar13 = -0x6c;
    goto LAB_1003d2321;
  }
  puVar14[0x120] = 0;
  *(undefined8 *)(puVar14 + 0x122) = 0;
  *(undefined8 *)(puVar14 + 0x124) = 0;
  *(undefined8 *)(puVar14 + 0x126) = 0;
  *(undefined8 *)(puVar14 + 0x128) = 0;
  *(undefined8 *)(puVar14 + 0x12a) = 0;
  *(undefined8 *)(puVar14 + 300) = 0;
  *(undefined8 *)(puVar14 + 0x12e) = 0;
  *(undefined8 *)(puVar14 + 0x130) = 0;
  *(undefined8 *)(puVar14 + 0x132) = 0;
  *(undefined8 *)(puVar14 + 0x134) = 0;
  FUN_1001c62d9(puVar14,0x4f0);
  iVar13 = FUN_100432267(*(undefined4 *)(param_1 + 0x28),puVar14 + 8);
  if (iVar13 != -0x80) {
    if (iVar13 == 0) {
      iVar13 = FUN_1001e96d3(puVar14 + 0x132,1,0);
      if (iVar13 != -0x80) {
        if (iVar13 != 0) {
          uVar15 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar15,0x10);
          if (cVar12 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
            goto LAB_1003d22e8;
          }
          goto LAB_1003d22fb;
        }
        *puVar14 = 0x73796e63;
        puVar14[1] = *(undefined4 *)(param_1 + 0x66b0);
        *(long *)(puVar14 + 4) = param_1;
        *(undefined2 *)((long)puVar14 + 0x3f2) = 0x100;
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        uVar4 = param_2[4];
        uVar5 = param_2[5];
        uVar6 = param_2[6];
        uVar7 = param_2[7];
        uVar8 = param_2[8];
        uVar9 = param_2[9];
        uVar10 = param_2[10];
        uVar11 = param_2[0xb];
        puVar14[0x104] = *param_2;
        puVar14[0x105] = uVar1;
        puVar14[0x106] = uVar2;
        puVar14[0x107] = uVar3;
        puVar14[0x108] = uVar4;
        puVar14[0x109] = uVar5;
        puVar14[0x10a] = uVar6;
        puVar14[0x10b] = uVar7;
        puVar14[0x10c] = uVar8;
        puVar14[0x10d] = uVar9;
        puVar14[0x10e] = uVar10;
        puVar14[0x10f] = uVar11;
        iVar13 = FUN_1001ee6ff(FUN_1003d23c9,puVar14,0xfffffffe,0,0,"");
        if (iVar13 == -0x80) goto LAB_1003d2300;
        if (iVar13 != 0) {
          uVar15 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar15,0x10);
          if (cVar12 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
            goto LAB_1003d22e8;
          }
          goto LAB_1003d22fb;
        }
        iVar13 = FUN_100602806(puVar14);
        if (iVar13 == -0x80) goto LAB_1003d2300;
        if (iVar13 != 0) {
          uVar15 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar15,0x10);
          if (cVar12 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
            goto LAB_1003d22e8;
          }
          goto LAB_1003d22fb;
        }
        iVar13 = FUN_1001ceb24(puVar14 + 0x104,0x69646c65,0,0,0);
        if (iVar13 == -0x80) goto LAB_1003d2300;
        if (iVar13 != 0) {
          uVar15 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar15,0x10);
          if (cVar12 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
            goto LAB_1003d22e8;
          }
          goto LAB_1003d22fb;
        }
        iVar13 = puVar14[0xc];
        if (iVar13 == 0) {
          if (*(long *)(puVar14 + 0xf8) != 0) {
            *param_3 = *(long *)(puVar14 + 0xf8);
            goto LAB_1003d231e;
          }
          uVar15 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar15,0x10);
          if (cVar12 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "context->desktopPhotoLibrary != nullptr";
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar13 = -0x32;
        }
      }
    }
    else {
      uVar15 = FUN_1001cc310();
      cVar12 = _os_log_type_enabled(uVar15,0x10);
      if (cVar12 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
LAB_1003d22e8:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
LAB_1003d22fb:
      if (iVar13 == 0) {
LAB_1003d231e:
        iVar13 = 0;
        goto LAB_1003d2321;
      }
    }
  }
LAB_1003d2300:
  if (*(long *)(puVar14 + 0xf8) != 0) {
    FUN_100495a1c();
    *(undefined8 *)(puVar14 + 0xf8) = 0;
  }
LAB_1003d2321:
  FUN_1003d2bbb(puVar14);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

