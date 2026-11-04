// name: FUN_1000193b0
// address: 1000193b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010071bf82) overlaps instruction at (ram,0x00010071bf81)
    */
/* WARNING: Removing unreachable block (ram,0x00010071c0d0) */
/* WARNING: Removing unreachable block (ram,0x00010071c0d2) */
/* WARNING: Removing unreachable block (ram,0x00010071c137) */
/* WARNING: Removing unreachable block (ram,0x00010071bf81) */
/* WARNING: Removing unreachable block (ram,0x00010071c12c) */
/* WARNING: Removing unreachable block (ram,0x00010071c12e) */
/* WARNING: Removing unreachable block (ram,0x00010071c199) */
/* WARNING: Removing unreachable block (ram,0x00010071c197) */
/* WARNING: Removing unreachable block (ram,0x00010071c201) */
/* WARNING: Removing unreachable block (ram,0x00010071c23a) */
/* WARNING: Removing unreachable block (ram,0x00010071c207) */
/* WARNING: Removing unreachable block (ram,0x00010071c27f) */
/* WARNING: Removing unreachable block (ram,0x00010071c211) */
/* WARNING: Removing unreachable block (ram,0x00010071c21c) */
/* WARNING: Removing unreachable block (ram,0x00010071c28a) */
/* WARNING: Removing unreachable block (ram,0x00010071c28c) */
/* WARNING: Removing unreachable block (ram,0x00010071c291) */
/* WARNING: Removing unreachable block (ram,0x00010071c2ed) */
/* WARNING: Removing unreachable block (ram,0x00010074bcae) */
/* WARNING: Removing unreachable block (ram,0x00010074bb51) */
/* WARNING: Removing unreachable block (ram,0x00010074bbbc) */
/* WARNING: Removing unreachable block (ram,0x00010074bb53) */
/* WARNING: Removing unreachable block (ram,0x00010074bb5b) */
/* WARNING: Removing unreachable block (ram,0x00010074bbc9) */
/* WARNING: Removing unreachable block (ram,0x00010074bbcc) */
/* WARNING: Removing unreachable block (ram,0x00010074bbd5) */
/* WARNING: Removing unreachable block (ram,0x00010074bc3a) */
/* WARNING: Removing unreachable block (ram,0x00010074bc47) */
/* WARNING: Removing unreachable block (ram,0x00010074bc4b) */
/* WARNING: Removing unreachable block (ram,0x00010074bc6b) */
/* WARNING: Removing unreachable block (ram,0x00010074bcd6) */
/* WARNING: Removing unreachable block (ram,0x00010074bc6f) */
/* WARNING: Removing unreachable block (ram,0x00010074bbff) */
/* WARNING: Removing unreachable block (ram,0x00010074bc07) */
/* WARNING: Removing unreachable block (ram,0x00010074bc75) */
/* WARNING: Removing unreachable block (ram,0x00010074bcd2) */
/* WARNING: Removing unreachable block (ram,0x00010074bcb2) */
/* WARNING: Removing unreachable block (ram,0x00010074bcb3) */
/* WARNING: Removing unreachable block (ram,0x00010071bfc9) */
/* WARNING: Removing unreachable block (ram,0x00010071c0f4) */
/* WARNING: Removing unreachable block (ram,0x00010071c14f) */
/* WARNING: Removing unreachable block (ram,0x00010071c106) */
/* WARNING: Removing unreachable block (ram,0x00010071c066) */
/* WARNING: Removing unreachable block (ram,0x00010071c0e2) */
/* WARNING: Removing unreachable block (ram,0x00010071bff6) */
/* WARNING: Removing unreachable block (ram,0x00010071bff8) */
/* WARNING: Removing unreachable block (ram,0x00010071c071) */
/* WARNING: Removing unreachable block (ram,0x00010071c003) */
/* WARNING: Removing unreachable block (ram,0x00010071c069) */
/* WARNING: Removing unreachable block (ram,0x00010071c044) */
/* WARNING: Removing unreachable block (ram,0x00010071c048) */
/* WARNING: Removing unreachable block (ram,0x00010071bf9b) */
/* WARNING: Removing unreachable block (ram,0x00010071bfa0) */
/* WARNING: Removing unreachable block (ram,0x00010071c017) */
/* WARNING: Removing unreachable block (ram,0x00010071bfa9) */
/* WARNING: Removing unreachable block (ram,0x00010071bfd3) */
/* WARNING: Removing unreachable block (ram,0x00010071bfd6) */
/* WARNING: Removing unreachable block (ram,0x00010071befd) */
/* WARNING: Removing unreachable block (ram,0x00010071c12b) */
/* WARNING: Removing unreachable block (ram,0x00010071bfb0) */
/* WARNING: Removing unreachable block (ram,0x00010071c070) */
/* WARNING: Removing unreachable block (ram,0x00010071bf40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1000193b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  char cVar11;
  ulong uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar10;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  undefined2 uVar17;
  uint uVar18;
  byte bVar19;
  uint *unaff_RBX;
  ulong *puVar20;
  long unaff_RBP;
  undefined1 *puVar21;
  undefined4 *puVar22;
  byte bVar23;
  long unaff_R14;
  bool bVar24;
  byte bVar25;
  undefined1 *unaff_retaddr;
  undefined1 auStack_28 [8];
  undefined1 local_20 [8];
  int *piVar9;
  undefined7 uVar12;
  
  uVar12 = (undefined7)((ulong)param_5 >> 8);
  bVar23 = (byte)param_5;
  bVar25 = 0;
  uVar6 = (DAT_10088e7f8 ^ _DAT_10088e770) - (long)local_20;
  _DAT_10088e770 = uVar6 * 0x79f54c43 + 0x585ffb1538078cd1;
  DAT_10088e7f8 = (uVar6 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  uVar5 = ((int)DAT_10088e7f8 - (int)_DAT_10088e770 ^ 0xc7f8732fU) * 0x79f54c43;
  puVar7 = (undefined4 *)
           (*(code *)((&PTR__bootstrap_look_up_10082e9f0)
                      [(int)((byte)((byte)uVar5 ^
                                   (&DAT_1006d0d70)[(byte)(&DAT_1006cfe50)[uVar5 & 0xff] ^ 0xd7]) -
                            0x41)] + -1))(param_2);
  uVar5 = (_DAT_10088e770 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  uVar18 = (byte)(&DAT_1006d0b70)[uVar5 & 0xff] ^ 99;
  uVar6 = (ulong)uVar18;
  bVar13 = (byte)uVar5 ^ (&DAT_1006d1a30)[uVar6];
  iVar14 = bVar13 - 0x32;
  puVar15 = (uint *)(long)iVar14;
  bVar24 = &stack0x00000000 == (undefined1 *)0x18;
  uVar17 = (undefined2)uVar18;
  bVar19 = (byte)unaff_RBX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x0001006ce774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__SecKeyCreateWithData_10082e8e0)();
    return;
  case 0x11:
                    /* WARNING: Could not recover jumptable at 0x0001006ce77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__SecKeyVerifySignature_10082e8e8)();
    return;
  case 0x12:
                    /* WARNING: Could not recover jumptable at 0x0001006ce780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__SessionGetInfo_10082e8f0)();
    return;
  case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
                    /* WARNING: Could not recover jumptable at 0x0001006cea8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__crc32_10082e920)();
    return;
  case 0x19:
                    /* WARNING: Could not recover jumptable at 0x0001006cea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__deflate_10082e928)();
    return;
  case 0x1a:
                    /* WARNING: Could not recover jumptable at 0x0001006cea9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__deflateEnd_10082e930)();
    return;
  case 0x1b:
                    /* WARNING: Could not recover jumptable at 0x0001006ceaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__deflateInit2__10082e938)();
    return;
  case 0x1c:
                    /* WARNING: Could not recover jumptable at 0x0001006ceaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__deflateInit__10082e940)();
    return;
  case 0x1d:
                    /* WARNING: Could not recover jumptable at 0x0001006cebee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__get_crc_table_10082e948)();
    return;
  case 0x1e:
                    /* WARNING: Could not recover jumptable at 0x0001006cec4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__inflate_10082e950)();
    return;
  case 0x1f:
                    /* WARNING: Could not recover jumptable at 0x0001006cec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__inflateEnd_10082e958)();
    return;
  case 0x20:
                    /* WARNING: Could not recover jumptable at 0x0001006cec5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__inflateInit2__10082e960)();
    return;
  case 0x21:
                    /* WARNING: Could not recover jumptable at 0x0001006cec60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__inflateInit__10082e968)();
    return;
  case 0x22:
    pcVar8 = (char *)(CONCAT62((int6)(short)((uint)iVar14 >> 0x10),
                               CONCAT11((char)((uint)iVar14 >> 8) + -0x17 +
                                        ((undefined1 *)0xffffffffffffffef < auStack_28),(char)iVar14
                                       )) & 0xffffffff);
    cVar4 = (char)pcVar8;
    iRam000000000082e9f0._0_1_ = (char)iRam000000000082e9f0 + cVar4;
    *pcVar8 = *pcVar8 + cVar4;
    cVar11 = (char)((ulong)pcVar8 >> 8);
    uVar12 = (undefined7)((ulong)pcVar8 >> 8);
    cVar4 = cVar4 + cVar11;
    piVar9 = (int *)CONCAT71(uVar12,cVar4);
    *piVar9 = *piVar9 << 0x10;
    *piVar9 = *piVar9 + (int)piVar9;
    *(char *)piVar9 = (char)*piVar9 + cVar4;
    *(char *)piVar9 = (char)*piVar9 + -0x10;
    cRam0000000001836db0 = cRam0000000001836db0 + bVar19 * '\x02';
    iRam000000000082e9f0._0_1_ = (char)iRam000000000082e9f0 + -0x60;
    *(char *)(uVar6 + 0x10016c0) = *(char *)(uVar6 + 0x10016c0) + cVar4;
    iRam000000000082e9f0 = CONCAT31(iRam000000000082e9f0._1_3_,(char)iRam000000000082e9f0 + -0x10);
    iRam000000000082e9f0 = iRam000000000082e9f0 + 0x82e9f0;
    iRam000000000082e9f0._1_3_ = (undefined3)((uint)iRam000000000082e9f0 >> 8);
    cVar4 = cVar4 * '\x02';
    pcVar8 = (char *)CONCAT71(uVar12,cVar4);
    iRam000000000082e9f0 =
         CONCAT31(iRam000000000082e9f0._1_3_,(char)iRam000000000082e9f0 + -0x10 + cVar4);
    *pcVar8 = *pcVar8 + cVar4;
    pcVar8[0x100872e] = pcVar8[0x100872e] + cVar11;
    *pcVar8 = *pcVar8 + cVar4;
    puVar15 = (uint *)CONCAT71(uVar12,cVar4 + (char)uVar18);
    LOCK();
    uVar5 = *puVar15;
    *puVar15 = (uint)puVar15;
    pbVar10 = (byte *)(ulong)uVar5;
    UNLOCK();
    *(uint *)pbVar10 = *(int *)pbVar10 + uVar5;
    bVar13 = (byte)uVar5;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 & bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *(uint *)pbVar10 = *(int *)pbVar10 + uVar5;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    *pbVar10 = *pbVar10 + bVar13;
    pcVar8 = (char *)CONCAT62(0x82,CONCAT11(bVar13 - 0x17,0xf0));
    pcVar16 = (char *)(ulong)uVar5;
    *pcVar16 = *pcVar16 + -0x10;
    *pcVar8 = *pcVar8 + -0x10;
    *pcVar8 = *pcVar8 + -0x10;
    *pcVar8 = *pcVar8 + -0x10;
    *pcVar8 = *pcVar8 + -0x10;
    *pcVar8 = *pcVar8 + -0x10;
    *pcVar16 = *pcVar16 + -0x10;
    *pcVar8 = *pcVar8 + -0x10;
    puVar21 = (undefined1 *)(CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar19 * '\x02') + 0x100);
    *puVar21 = *puVar21;
    *(undefined4 *)puVar7 = uRam00000000006d1a30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x26:
    if (bVar24) {
      uRam0000000000000000 = CONCAT71(uVar12,bVar23);
      uVar1 = in(uVar17);
      *(undefined1 *)puVar7 = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1006d1a30 = _DAT_1006d1a30 ^ 0x6d1a30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
    if (bVar24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1006d1a30 = _DAT_1006d1a30 ^ 0x6d1a30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
    if (!bVar24) {
      _DAT_1006d1a30 = _DAT_1006d1a30 ^ 0x6d1a30;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1006d1a30 = _DAT_1006d1a30 ^ 0x6d1a30;
    puVar15 = (uint *)(&UNK_1006d1a34 + (ulong)bVar25 * -8);
    out(_DAT_1006d1a30,uVar17);
    if (_DAT_1006d1a30 != 0) {
      *puVar15 = *puVar15 ^ (uint)puVar15;
      out(*puVar15,uVar17);
      if (*puVar15 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = in(uVar17);
      *(undefined1 *)puVar7 = uVar1;
      out(*(undefined4 *)(&UNK_1006d1a38 + (ulong)bVar25 * -8 + (ulong)bVar25 * -8),uVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = in(uVar17);
    *(undefined1 *)puVar7 = uVar1;
    out(*puVar15,uVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2a:
                    /* WARNING: Could not recover jumptable at 0x0001006ce960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_delete___10082e9b0)();
    return;
  case 0x2b:
                    /* WARNING: Could not recover jumptable at 0x0001006ce966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_delete_10082e9b8)();
    return;
  case 0x2c:
                    /* WARNING: Could not recover jumptable at 0x0001006ce96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_delete_10082e9c0)();
    return;
  case 0x2d:
                    /* WARNING: Could not recover jumptable at 0x0001006ce972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_new___10082e9c8)();
    return;
  case 0x2e:
                    /* WARNING: Could not recover jumptable at 0x0001006ce978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_new___10082e9d0)();
    return;
  case 0x2f:
                    /* WARNING: Could not recover jumptable at 0x0001006ce97e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_new_10082e9d8)();
    return;
  case 0x30:
                    /* WARNING: Could not recover jumptable at 0x0001006ce984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_operator_new_10082e9e0)();
    return;
  }
  if ((undefined1 *)0xffffffffffffffef < auStack_28 || bVar24) {
    _DAT_1006d1a30 = _DAT_1006d1a30 ^ 0x6d1a30;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar10 = (byte *)(unaff_R14 + 0x76);
  bVar13 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar23;
  if (CARRY1(bVar13,bVar23) || *pbVar10 == 0) {
    if (!CARRY1(bVar13,bVar23)) {
      uVar2 = in(uVar17);
      *puVar7 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*pbVar10 != 0) {
      *puVar15 = *puVar15 ^ 0x6d1a30;
      if (bVar19 < PTR_DAT_10088e798_3_10082ea48._7_1_) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(DAT_1006d1a30,uVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  UNK_1006d1a83 = UNK_1006d1a83 + (char)iVar14;
  if (UNK_1006d1a83 == '\0') {
    out(DAT_1006d1a30,uVar17);
    uVar1 = in(uVar17);
    *(undefined1 *)puVar7 = uVar1;
    out(*(undefined4 *)(&UNK_1006d1a31 + (ulong)bVar25 * -2),uVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar15 = *puVar15 ^ 0x6d1a30;
  pbVar10 = unaff_retaddr + 0x5f;
  *pbVar10 = *pbVar10 ^ bVar19;
  bVar24 = *pbVar10 == 0;
  if (!bVar24) {
    if (bVar24) {
      out(_DAT_1006d1a30,uVar17);
      uVar1 = in(uVar17);
      *unaff_retaddr = uVar1;
      out(*(undefined4 *)(&UNK_1006d1a34 + (ulong)bVar25 * -8),uVar17);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar21 = (undefined1 *)(ulong)*(uint *)((long)puVar15 + unaff_RBP * 2 + 0x6f);
  puVar7 = (undefined4 *)(puVar21 + (ulong)bVar25 * -2 + 1);
  out(*puVar21,uVar17);
  if (bVar24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar22 = puVar7 + (ulong)bVar25 * -2 + 1;
  out(*puVar7,uVar17);
  uVar5 = puVar15[0x1b];
  uVar1 = in(uVar17);
  *param_8 = uVar1;
  puVar7 = puVar22 + (ulong)bVar25 * -2 + 1;
  out(*puVar22,uVar17);
  puVar20 = (ulong *)(ulong)puVar15[0x1d];
  out(*puVar7,uVar17);
  if (uVar5 < (uint)&stack0x00000018) {
    pcVar8 = (char *)(unaff_R14 + 0x53);
    *pcVar8 = *pcVar8 + param_6;
    uVar5 = (uint)(puVar7 + (ulong)bVar25 * -2 + 1);
    if (*pcVar8 != '\0') {
      lVar3 = puVar20[1];
      *unaff_RBX = *unaff_RBX ^ uVar5;
      if ((int)unaff_RBX == *(int *)(lVar3 + 0x5f)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(*(undefined1 *)(puVar7 + (ulong)bVar25 * -2 + 1),uVar17);
      out(*(undefined1 *)(uVar5 + 1 + (uint)bVar25 * -2),uVar17);
      puVar20[1] = (ulong)ram0x00010082ea36;
      *puVar20 = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    PTR__bootstrap_look_up_10082e9f0._0_4_ = (uint)PTR__bootstrap_look_up_10082e9f0 ^ uVar5;
    if ((uint)PTR__bootstrap_look_up_10082e9f0 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*(undefined1 *)(ulong)*(uint *)((long)puVar15 + unaff_RBP * 2 + 0x6f),uVar17);
    puVar20[3] = unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar20[-1] = (ulong)unaff_RBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

