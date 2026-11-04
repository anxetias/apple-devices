// name: FUN_1001c8842
// address: 1001c8842

int FUN_1001c8842(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006aaefc(uVar5);
    }
LAB_1001c8a09:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006aae86(uVar5);
    }
    goto LAB_1001c8a09;
  }
  puVar3 = (undefined4 *)FUN_1001c6429(0x48);
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006aae10(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  *puVar3 = 0x6d657461;
  *(long *)(puVar3 + 2) = param_1;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
    iVar2 = FUN_10015c7aa(param_1,4,FUN_1001c8c35,puVar3);
    if (iVar2 == -0x80) {
LAB_1001c8bfa:
      FUN_1001c64c1(puVar3);
      return iVar2;
    }
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006aada4(iVar2,uVar5);
      }
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_1001c8bfa;
    }
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) {
LAB_1001c89a4:
      if ((*(long *)(puVar3 + 4) == 0) ||
         (*(int *)(*(long *)(*(long *)(puVar3 + 4) + 0x20) + 0x10) == 0x7269646d)) {
        *param_2 = puVar3;
        return 0;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006aad2e(uVar5);
      }
LAB_1001c8beb:
      FUN_1001782e9(0,0);
      iVar2 = -0xd0;
      goto LAB_1001c8bfa;
    }
  }
LAB_1001c88b6:
  uVar7 = *(uint *)(plVar4[4] + 4);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if ((int)uVar7 < 0x696c7374) {
    if (0x66726564 < (int)uVar7) {
      plVar6 = (long *)(puVar3 + 0x10);
      if (uVar7 == 0x66726565) goto LAB_1001c8994;
      if (uVar7 == 0x68646c72) {
        plVar6 = (long *)(puVar3 + 4);
        if (*(long *)(puVar3 + 4) == 0) goto LAB_1001c8994;
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006aac42(uVar5);
        }
        goto LAB_1001c8beb;
      }
      goto LAB_1001c8998;
    }
    if (uVar7 != 0x63747279) {
      if (uVar7 != 0x64696e66) goto LAB_1001c8998;
      plVar6 = (long *)(puVar3 + 0xe);
      if (*(long *)(puVar3 + 0xe) == 0) goto LAB_1001c8994;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006aa9f4(uVar5);
      }
      goto LAB_1001c8beb;
    }
    plVar6 = (long *)(puVar3 + 10);
    if (*(long *)(puVar3 + 10) != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006aaae0(uVar5);
      }
      goto LAB_1001c8beb;
    }
  }
  else if ((int)uVar7 < 0x6d657461) {
    if (uVar7 == 0x696c7374) {
      plVar6 = (long *)(puVar3 + 6);
      if (*(long *)(puVar3 + 6) != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006aabcc(uVar5);
        }
        goto LAB_1001c8beb;
      }
    }
    else {
      if (uVar7 != 0x6c616e67) goto LAB_1001c8998;
      plVar6 = (long *)(puVar3 + 0xc);
      if (*(long *)(puVar3 + 0xc) != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006aaa6a(uVar5);
        }
        goto LAB_1001c8beb;
      }
    }
  }
  else if (uVar7 == 0x74797073) {
    plVar6 = (long *)(puVar3 + 8);
    if (*(long *)(puVar3 + 8) != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006aab56(uVar5);
      }
      goto LAB_1001c8beb;
    }
  }
  else {
    if (uVar7 != 0x6d657461) goto LAB_1001c8998;
    plVar6 = (long *)(puVar3 + 2);
    if (*(long *)(puVar3 + 2) != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006aacb8(uVar5);
      }
      goto LAB_1001c8beb;
    }
  }
LAB_1001c8994:
  *plVar6 = (long)plVar4;
LAB_1001c8998:
  plVar4 = (long *)*plVar4;
  if (plVar4 == (long *)0x0) goto LAB_1001c89a4;
  goto LAB_1001c88b6;
}

