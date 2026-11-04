// rea decompile_all
// name: _amai_zipOpenNewFileInZip3
// address: 0x1be7fb
// body: available
// range: 0x1be7fb-0x1bf200 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bf1fc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _amai_zipOpenNewFileInZip3
              (long param_1,char *param_2,uint *param_3,undefined8 param_4,uint param_5,long param_6
              ,uint param_7,char *param_8,uint param_9,uint param_10,undefined4 param_11,
              int param_12,int param_13,int param_14,long param_15,undefined8 param_16)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  uLongf *puVar13;
  time_t tVar14;
  char *pcVar15;
  long lVar16;
  bool bVar17;
  ulong local_68;
  undefined4 local_50 [2];
  byte local_46;
  byte local_45;
  byte abStack_42 [10];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar4 = -0x66;
  if ((param_9 & 0xfffffff7) != 0 || param_1 == 0) goto LAB_001bee69;
  if (*(int *)(param_1 + 0x58) == 1) {
    iVar4 = _amai_zipCloseFileInZipRaw(param_1,0,0);
    if (iVar4 != 0) goto LAB_001bee69;
  }
  pcVar15 = "-";
  if (param_2 != (char *)0x0) {
    pcVar15 = param_2;
  }
  if (param_8 == (char *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = _strlen(param_8);
  }
  sVar7 = _strlen(pcVar15);
  if (param_3 == (uint *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulong *)(param_3 + 6);
    if (uVar8 == 0) {
      uVar11 = (ulong)param_3[5];
      uVar8 = uVar11 - 0x50;
      if (uVar11 < 0x51) {
        uVar8 = uVar11;
      }
      if (0x7bc < uVar11) {
        uVar8 = uVar11 - 0x7bc;
      }
      uVar8 = (ulong)param_3[2] * 0x800 + (ulong)(param_3[1] * 0x20 + (*param_3 >> 1)) |
              (ulong)(param_3[4] * 0x20 + param_3[3] + 0x20) * 0x10000 + uVar8 * 0x2000000;
    }
  }
  *(ulong *)(param_1 + 0x4100) = uVar8;
  uVar8 = (ulong)((uint)((param_10 & 0xfffffffe) == 8) * 2);
  *(ulong *)(param_1 + 0xf0) = uVar8;
  if (param_10 == 2) {
    uVar8 = 4;
LAB_001be947:
    *(ulong *)(param_1 + 0xf0) = uVar8;
  }
  else if (param_10 == 1) {
    uVar8 = 6;
    goto LAB_001be947;
  }
  if (param_15 != 0) {
    *(ulong *)(param_1 + 0xf0) = uVar8 | 1;
  }
  lVar16 = 0;
  *(undefined8 *)(param_1 + 0x4108) = 0;
  *(uint *)(param_1 + 0xf8) = param_9;
  *(undefined4 *)(param_1 + 0x4110) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = param_11;
  lVar9 = (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  *(long *)(param_1 + 0xd8) = lVar9;
  uVar5 = (uint)local_68;
  uVar6 = (uint)sVar7;
  uVar8 = (ulong)(uVar6 + uVar5 + param_7 + 0x2e);
  *(ulong *)(param_1 + 0xe8) = uVar8;
  pvVar10 = _malloc(uVar8);
  *(void **)(param_1 + 0xe0) = pvVar10;
  uVar8 = 0x2014b50;
  do {
    *(char *)((long)pvVar10 + lVar16) = (char)uVar8;
    uVar8 = uVar8 >> 8;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 4);
  *(undefined4 *)((long)pvVar10 + 4) = 0x140000;
  uVar8 = *(ulong *)(param_1 + 0xf0);
  *(short *)((long)pvVar10 + 8) = (short)uVar8;
  if (0xffff < uVar8) {
    *(undefined2 *)((long)pvVar10 + 8) = 0xffff;
  }
  uVar2 = *(uint *)(param_1 + 0xf8);
  *(short *)((long)pvVar10 + 10) = (short)uVar2;
  if (0xffff < uVar2) {
    *(undefined2 *)((long)pvVar10 + 10) = 0xffff;
  }
  lVar16 = 0;
  uVar8 = *(ulong *)(param_1 + 0x4100);
  do {
    uVar11 = uVar8;
    *(char *)((long)pvVar10 + lVar16 + 0xc) = (char)uVar11;
    lVar16 = lVar16 + 1;
    uVar8 = uVar11 >> 8;
  } while (lVar16 != 4);
  if (0xff < uVar11) {
    *(undefined4 *)((long)pvVar10 + 0xc) = 0xffffffff;
  }
  *(undefined8 *)((long)pvVar10 + 0x10) = 0;
  *(undefined4 *)((long)pvVar10 + 0x18) = 0;
  uVar8 = sVar7 & 0xffffffff;
  *(char *)((long)pvVar10 + 0x1c) = (char)sVar7;
  *(char *)((long)pvVar10 + 0x1d) = (char)(sVar7 >> 8);
  if (0xffff < uVar8) {
    *(undefined2 *)((long)pvVar10 + 0x1c) = 0xffff;
  }
  *(short *)((long)pvVar10 + 0x1e) = (short)param_7;
  if (0xffff < param_7) {
    *(undefined2 *)((long)pvVar10 + 0x1e) = 0xffff;
  }
  *(short *)((long)pvVar10 + 0x20) = (short)local_68;
  if (0xffff < uVar5) {
    *(undefined2 *)((long)pvVar10 + 0x20) = 0xffff;
  }
  *(undefined2 *)((long)pvVar10 + 0x22) = 0;
  if (param_3 == (uint *)0x0) {
    *(undefined2 *)((long)pvVar10 + 0x24) = 0;
    *(undefined4 *)((long)pvVar10 + 0x26) = 0;
  }
  else {
    uVar11 = *(ulong *)(param_3 + 8);
    *(short *)((long)pvVar10 + 0x24) = (short)uVar11;
    if (0xffff < uVar11) {
      *(undefined2 *)((long)pvVar10 + 0x24) = 0xffff;
    }
    lVar16 = 0;
    uVar11 = *(ulong *)(param_3 + 10);
    do {
      uVar12 = uVar11;
      *(char *)((long)pvVar10 + lVar16 + 0x26) = (char)uVar12;
      lVar16 = lVar16 + 1;
      uVar11 = uVar12 >> 8;
    } while (lVar16 != 4);
    if (0xff < uVar12) {
      *(undefined4 *)((long)pvVar10 + 0x26) = 0xffffffff;
    }
  }
  lVar16 = 0;
  uVar11 = lVar9 - *(long *)(param_1 + 0x4148);
  do {
    uVar12 = uVar11;
    *(char *)((long)pvVar10 + lVar16 + 0x2a) = (char)uVar12;
    lVar16 = lVar16 + 1;
    uVar11 = uVar12 >> 8;
  } while (lVar16 != 4);
  if (0xff < uVar12) {
    *(undefined4 *)((long)pvVar10 + 0x2a) = 0xffffffff;
  }
  if (uVar6 != 0) {
    uVar11 = 0;
    do {
      *(char *)(*(long *)(param_1 + 0xe0) + 0x2e + uVar11) = pcVar15[uVar11];
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar11);
  }
  if (param_7 != 0) {
    uVar11 = 0;
    do {
      *(undefined1 *)(uVar11 + *(long *)(param_1 + 0xe0) + uVar8 + 0x2e) =
           *(undefined1 *)(param_6 + uVar11);
      uVar11 = uVar11 + 1;
    } while (param_7 != uVar11);
  }
  if (uVar5 != 0) {
    uVar11 = 0;
    do {
      *(char *)(uVar11 + *(long *)(param_1 + 0xe0) + param_7 + uVar8 + 0x2e) = param_8[uVar11];
      uVar11 = uVar11 + 1;
    } while ((local_68 & 0xffffffff) != uVar11);
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    iVar4 = -0x68;
    goto LAB_001bee69;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = 0x4034b50;
  lVar9 = 0;
  do {
    *(char *)((long)local_50 + lVar9) = (char)uVar11;
    uVar11 = uVar11 >> 8;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  lVar9 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar3,local_50,4);
  if (lVar9 == 4) {
    local_50[0] = CONCAT22(local_50[0]._2_2_,0x14);
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,2);
    if (lVar9 != 2) goto LAB_001bee2a;
    local_50[0]._0_2_ = (short)*(ulong *)(param_1 + 0xf0);
    if (0xffff < *(ulong *)(param_1 + 0xf0)) {
      local_50[0]._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,2);
    if (lVar9 != 2) goto LAB_001bee2a;
    local_50[0]._0_2_ = (short)*(uint *)(param_1 + 0xf8);
    if (0xffff < *(uint *)(param_1 + 0xf8)) {
      local_50[0]._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50);
    if (lVar9 != 2) goto LAB_001bee2a;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    lVar9 = 0;
    uVar11 = *(ulong *)(param_1 + 0x4100);
    do {
      uVar12 = uVar11;
      *(char *)((long)local_50 + lVar9) = (char)uVar12;
      lVar9 = lVar9 + 1;
      uVar11 = uVar12 >> 8;
    } while (lVar9 != 4);
    if (0xff < uVar12) {
      local_50[0] = 0xffffffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar3,local_50,4);
    if (lVar9 != 4) goto LAB_001bee2a;
    local_50[0] = 0;
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,4);
    if (lVar9 != 4) goto LAB_001bee2a;
    local_50[0] = 0;
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,4);
    if (lVar9 != 4) goto LAB_001bee2a;
    local_50[0] = 0;
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,4);
    if (lVar9 != 4) goto LAB_001bee2a;
    local_50[0]._0_2_ = (undefined2)sVar7;
    if (0xffff < uVar6) {
      local_50[0]._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,2);
    if (lVar9 != 2) goto LAB_001bee2a;
    local_50[0]._0_2_ = (short)param_5;
    if (0xffff < param_5) {
      local_50[0]._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,2);
    bVar17 = lVar9 != 2;
    if (uVar6 != 0 && !bVar17) {
      uVar11 = (**(code **)(param_1 + 0x10))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),pcVar15,
                          uVar8);
      bVar17 = uVar11 != uVar8;
    }
    if ((param_5 != 0) && (!bVar17)) {
      uVar8 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_4,
                         (ulong)param_5);
      if (uVar8 != param_5) goto LAB_001bee2a;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0x4000;
      *(long *)(param_1 + 0x78) = param_1 + 0x100;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
LAB_001beebe:
      if ((*(int *)(param_1 + 0xf8) == 8) && (*(int *)(param_1 + 0xfc) == 0)) {
        iVar4 = -param_12;
        if (-1 < -param_12) {
          iVar4 = param_12;
        }
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        iVar4 = _deflateInit2_((z_streamp)(param_1 + 0x60),param_10,8,iVar4,param_13,param_14,
                               "1.2.12",0x70);
        if (iVar4 != 0) goto LAB_001bee58;
        *(undefined4 *)(param_1 + 0xd0) = 1;
      }
      *(undefined4 *)(param_1 + 0x4138) = 0;
      if (param_15 != 0) {
        *(undefined4 *)(param_1 + 0x4110) = 1;
        puVar13 = _get_crc_table();
        *(uLongf **)(param_1 + 0x4130) = puVar13;
        iVar4 = _crypthead_calls + 1;
        bVar17 = _crypthead_calls == 0;
        _crypthead_calls = iVar4;
        if (bVar17) {
          tVar14 = _time((time_t *)0x0);
          _srand((uint)tVar14 ^ 0xbb40e64e);
        }
        _init_keys(param_15,param_1 + 0x4118,puVar13);
        lVar9 = 0;
        do {
          uVar6 = _rand();
          uVar5 = (uint)*(ulong *)(param_1 + 0x4128);
          uVar8 = *(ulong *)(param_1 + 0x4118) >> 8 ^
                  puVar13[((uint)*(ulong *)(param_1 + 0x4118) ^ uVar6 >> 7) & 0xff];
          *(ulong *)(param_1 + 0x4118) = uVar8;
          lVar16 = ((uVar8 & 0xff) + *(long *)(param_1 + 0x4120)) * 0x8088405 + 1;
          *(long *)(param_1 + 0x4120) = lVar16;
          *(ulong *)(param_1 + 0x4128) =
               *(ulong *)(param_1 + 0x4128) >> 8 ^
               puVar13[((uint)((ulong)lVar16 >> 0x18) & 0xff ^ uVar5) & 0xff];
          abStack_42[lVar9] = (byte)((uVar5 & 0xfffd ^ 3) * (uVar5 | 2) >> 8) ^ (byte)(uVar6 >> 7);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 10);
        _init_keys(param_15,param_1 + 0x4118,puVar13);
        uVar8 = *(ulong *)(param_1 + 0x4128);
        uVar11 = *(ulong *)(param_1 + 0x4118);
        lVar9 = *(long *)(param_1 + 0x4120);
        lVar16 = 0;
        do {
          uVar6 = (uint)uVar8;
          bVar1 = abStack_42[lVar16];
          uVar11 = uVar11 >> 8 ^ puVar13[(byte)((byte)uVar11 ^ bVar1)];
          *(ulong *)(param_1 + 0x4118) = uVar11;
          lVar9 = ((uVar11 & 0xff) + lVar9) * 0x8088405 + 1;
          *(long *)(param_1 + 0x4120) = lVar9;
          uVar8 = uVar8 >> 8 ^ puVar13[((uint)((ulong)lVar9 >> 0x18) & 0xff ^ uVar6) & 0xff];
          *(ulong *)(param_1 + 0x4128) = uVar8;
          *(byte *)((long)local_50 + lVar16) =
               (byte)((uVar6 & 0xfffd ^ 3) * (uVar6 | 2) >> 8) ^ bVar1;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 10);
        uVar6 = (uint)uVar8;
        uVar5 = (uint)((ulong)param_16 >> 0x10) & 0xffff;
        uVar11 = uVar11 >> 8 ^ puVar13[((uint)uVar11 ^ uVar5) & 0xff];
        *(ulong *)(param_1 + 0x4118) = uVar11;
        lVar16 = ((uVar11 & 0xff) + lVar9) * 0x8088405;
        lVar9 = lVar16 + 1;
        *(long *)(param_1 + 0x4120) = lVar9;
        uVar8 = uVar8 >> 8 ^ puVar13[((uint)((ulong)lVar9 >> 0x18) & 0xff ^ uVar6) & 0xff];
        *(ulong *)(param_1 + 0x4128) = uVar8;
        local_46 = (byte)uVar5 ^ (byte)((uVar6 & 0xfffd ^ 3) * (uVar6 | 2) >> 8);
        uVar6 = (uint)uVar8;
        uVar11 = uVar11 >> 8 ^ puVar13[(uint)uVar11 & 0xff ^ (uint)param_16 >> 0x18];
        *(ulong *)(param_1 + 0x4118) = uVar11;
        lVar9 = ((uVar11 & 0xff) + lVar16 + 1) * 0x8088405 + 1;
        *(long *)(param_1 + 0x4120) = lVar9;
        *(ulong *)(param_1 + 0x4128) =
             uVar8 >> 8 ^ puVar13[((uint)((ulong)lVar9 >> 0x18) & 0xff ^ uVar6) & 0xff];
        local_45 = (byte)((ulong)param_16 >> 0x18) ^ (byte)((uVar6 & 0xfffd ^ 3) * (uVar6 | 2) >> 8)
        ;
        *(undefined4 *)(param_1 + 0x4138) = 0xc;
        lVar9 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),local_50,
                           0xc);
        iVar4 = -1;
        if (lVar9 != 0xc) goto LAB_001bee69;
      }
      *(undefined4 *)(param_1 + 0x58) = 1;
      iVar4 = 0;
      goto LAB_001bee69;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0x4000;
    *(long *)(param_1 + 0x78) = param_1 + 0x100;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    iVar4 = -1;
    if (!bVar17) goto LAB_001beebe;
  }
  else {
LAB_001bee2a:
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0x4000;
    *(long *)(param_1 + 0x78) = param_1 + 0x100;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    iVar4 = -1;
  }
LAB_001bee58:
  *(undefined4 *)(param_1 + 0x4138) = 0;
LAB_001bee69:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

