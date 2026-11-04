// name: FUN_10042b4b0
// address: 10042b4b0

long FUN_10042b4b0(int param_1,undefined1 param_2,char param_3,long param_4,long param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "artwork != nullptr";
LAB_10042b72d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_3 != '\r') {
      if (param_3 == '\x1b') {
        pcVar4 = "BMP";
        pcVar14 = "image/bmp";
        goto LAB_10042b564;
      }
      if (param_3 == '\x0e') {
        pcVar4 = "PNG";
        pcVar14 = "image/png";
        goto LAB_10042b564;
      }
LAB_10042b5ac:
      lVar7 = 0;
      goto LAB_10042b6e7;
    }
    pcVar4 = "JPG";
    pcVar14 = "image/jpeg";
LAB_10042b564:
    bVar1 = false;
    if (param_1 != 0x41504943) {
      if ((param_1 != 0x50494320) && (param_1 != 0x50494300)) goto LAB_10042b5ac;
      bVar1 = true;
    }
    if (param_4 == 0) {
LAB_10042b5b4:
      lVar11 = 0;
      lVar12 = 1;
    }
    else {
      uVar3 = FUN_1001dfe99(param_4);
      if (uVar3 == 0) goto LAB_10042b5b4;
      lVar11 = (ulong)uVar3 + 1;
      lVar12 = 2;
    }
    lVar5 = FUN_1001df897(pcVar14);
    lVar7 = 5;
    if (!bVar1) {
      lVar7 = lVar5 + 3;
    }
    lVar15 = (lVar11 + 1) * lVar12;
    lVar6 = FUN_100170ef7(param_5);
    uVar13 = lVar6 + lVar15 + lVar7;
    lVar7 = FUN_1001c6429((uVar13 & 0xffffffff) + 0x18);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0xc) = (int)uVar13;
      *(bool *)(lVar7 + 0x12) = lVar11 != 0;
      lVar6 = lVar7 + 0x13;
      if (bVar1) {
        FUN_1001c631b(pcVar4,lVar6,3);
        puVar10 = (undefined1 *)(lVar7 + 0x16);
      }
      else {
        FUN_1001c631b(pcVar14,lVar6,lVar5 + 1);
        puVar10 = (undefined1 *)(lVar6 + lVar5 + 1);
      }
      *puVar10 = param_2;
      if (lVar11 != 0) {
        *(undefined2 *)(puVar10 + 1) = 0xfeff;
        FUN_1001c631b(param_4,puVar10 + 3,(lVar11 + -1) * lVar12);
      }
      *(undefined2 *)(puVar10 + lVar11 * 2 + 1) = 0;
      uVar8 = FUN_100170f3b(param_5);
      uVar9 = FUN_100170ef7(param_5);
      FUN_1001c631b(uVar8,puVar10 + lVar15 + 1,uVar9);
      goto LAB_10042b6e7;
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "tag != nullptr";
      goto LAB_10042b72d;
    }
  }
  lVar7 = 0;
  FUN_1001782e9(0,0);
LAB_10042b6e7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

