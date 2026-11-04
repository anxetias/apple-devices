// name: FUN_100119bc2
// address: 100119bc2

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100119bc2(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,long *param_6,
             long *param_7,char param_8)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  uint uVar41;
  int iVar42;
  undefined8 uVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  uint uVar49;
  ulong uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  float local_200;
  uint local_1fc;
  long local_1f8;
  long local_1f0;
  undefined1 local_1e8 [16];
  ulong local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint local_1a0;
  float local_19c;
  float local_198 [2];
  float local_190 [2];
  float local_188 [40];
  float local_e8 [2];
  float local_e0 [2];
  float local_d8 [40];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_8 == '\0') {
    iVar42 = (uint)*(byte *)(param_1 + 0x41) * (uint)*(byte *)(param_1 + 0x40);
    if (iVar42 != 0) {
      uVar56 = 6;
      do {
        lVar1 = param_6[uVar56];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_6[uVar56 + 1];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_6[uVar56 + 2];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_6[uVar56 + 3];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_7[uVar56];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_7[uVar56 + 1];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_7[uVar56 + 2];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        lVar1 = param_7[uVar56 + 3];
        *(undefined8 *)(lVar1 + 0xf0) = 0;
        *(undefined8 *)(lVar1 + 0xf8) = 0;
        *(undefined8 *)(lVar1 + 0xe0) = 0;
        *(undefined8 *)(lVar1 + 0xe8) = 0;
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        *(undefined8 *)(lVar1 + 0xc0) = 0;
        *(undefined8 *)(lVar1 + 200) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        uVar56 = uVar56 + 4;
      } while (uVar56 < iVar42 + 6);
    }
    puVar12 = *(undefined8 **)(param_3 + 0x238);
    puVar13 = (undefined8 *)param_6[iVar42 - 2U];
    uVar43 = puVar13[0xf];
    puVar12[0xe] = puVar13[0xe];
    puVar12[0xf] = uVar43;
    uVar43 = puVar13[0xd];
    puVar12[0xc] = puVar13[0xc];
    puVar12[0xd] = uVar43;
    uVar43 = puVar13[0xb];
    puVar12[10] = puVar13[10];
    puVar12[0xb] = uVar43;
    uVar43 = puVar13[9];
    puVar12[8] = puVar13[8];
    puVar12[9] = uVar43;
    uVar43 = *puVar13;
    uVar35 = puVar13[1];
    uVar36 = puVar13[2];
    uVar37 = puVar13[3];
    uVar38 = puVar13[4];
    uVar39 = puVar13[5];
    uVar40 = puVar13[7];
    puVar12[6] = puVar13[6];
    puVar12[7] = uVar40;
    puVar12[4] = uVar38;
    puVar12[5] = uVar39;
    puVar12[2] = uVar36;
    puVar12[3] = uVar37;
    *puVar12 = uVar43;
    puVar12[1] = uVar35;
    puVar12 = *(undefined8 **)(param_3 + 0x240);
    puVar13 = (undefined8 *)param_6[iVar42 - 1U];
    uVar43 = puVar13[0xf];
    puVar12[0xe] = puVar13[0xe];
    puVar12[0xf] = uVar43;
    uVar43 = puVar13[0xd];
    puVar12[0xc] = puVar13[0xc];
    puVar12[0xd] = uVar43;
    uVar43 = puVar13[0xb];
    puVar12[10] = puVar13[10];
    puVar12[0xb] = uVar43;
    uVar43 = puVar13[9];
    puVar12[8] = puVar13[8];
    puVar12[9] = uVar43;
    uVar43 = *puVar13;
    uVar35 = puVar13[1];
    uVar36 = puVar13[2];
    uVar37 = puVar13[3];
    uVar38 = puVar13[4];
    uVar39 = puVar13[5];
    uVar40 = puVar13[7];
    puVar12[6] = puVar13[6];
    puVar12[7] = uVar40;
    puVar12[4] = uVar38;
    puVar12[5] = uVar39;
    puVar12[2] = uVar36;
    puVar12[3] = uVar37;
    *puVar12 = uVar43;
    puVar12[1] = uVar35;
    puVar12 = *(undefined8 **)(param_3 + 0x248);
    puVar13 = (undefined8 *)param_7[iVar42 - 2U];
    uVar43 = puVar13[0xf];
    puVar12[0xe] = puVar13[0xe];
    puVar12[0xf] = uVar43;
    uVar43 = puVar13[0xd];
    puVar12[0xc] = puVar13[0xc];
    puVar12[0xd] = uVar43;
    uVar43 = puVar13[0xb];
    puVar12[10] = puVar13[10];
    puVar12[0xb] = uVar43;
    uVar43 = puVar13[9];
    puVar12[8] = puVar13[8];
    puVar12[9] = uVar43;
    uVar43 = *puVar13;
    uVar35 = puVar13[1];
    uVar36 = puVar13[2];
    uVar37 = puVar13[3];
    uVar38 = puVar13[4];
    uVar39 = puVar13[5];
    uVar40 = puVar13[7];
    puVar12[6] = puVar13[6];
    puVar12[7] = uVar40;
    puVar12[4] = uVar38;
    puVar12[5] = uVar39;
    puVar12[2] = uVar36;
    puVar12[3] = uVar37;
    *puVar12 = uVar43;
    puVar12[1] = uVar35;
    puVar14 = *(undefined4 **)(param_3 + 0x250);
    puVar15 = (undefined4 *)param_7[iVar42 - 1U];
    uVar43 = *(undefined8 *)(puVar15 + 0x1e);
    *(undefined8 *)(puVar14 + 0x1c) = *(undefined8 *)(puVar15 + 0x1c);
    *(undefined8 *)(puVar14 + 0x1e) = uVar43;
    uVar43 = *(undefined8 *)(puVar15 + 0x1a);
    *(undefined8 *)(puVar14 + 0x18) = *(undefined8 *)(puVar15 + 0x18);
    *(undefined8 *)(puVar14 + 0x1a) = uVar43;
    uVar43 = *(undefined8 *)(puVar15 + 0x16);
    *(undefined8 *)(puVar14 + 0x14) = *(undefined8 *)(puVar15 + 0x14);
    *(undefined8 *)(puVar14 + 0x16) = uVar43;
    uVar43 = *(undefined8 *)(puVar15 + 0x12);
    *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar15 + 0x10);
    *(undefined8 *)(puVar14 + 0x12) = uVar43;
    uVar31 = *puVar15;
    uVar32 = puVar15[1];
    uVar33 = puVar15[2];
    uVar34 = puVar15[3];
    uVar43 = *(undefined8 *)(puVar15 + 4);
    uVar35 = *(undefined8 *)(puVar15 + 6);
    uVar36 = *(undefined8 *)(puVar15 + 8);
    uVar37 = *(undefined8 *)(puVar15 + 10);
    uVar38 = *(undefined8 *)(puVar15 + 0xe);
    *(undefined8 *)(puVar14 + 0xc) = *(undefined8 *)(puVar15 + 0xc);
    *(undefined8 *)(puVar14 + 0xe) = uVar38;
    *(undefined8 *)(puVar14 + 8) = uVar36;
    *(undefined8 *)(puVar14 + 10) = uVar37;
    *(undefined8 *)(puVar14 + 4) = uVar43;
    *(undefined8 *)(puVar14 + 6) = uVar35;
    *puVar14 = uVar31;
    puVar14[1] = uVar32;
    puVar14[2] = uVar33;
    puVar14[3] = uVar34;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x41);
    bVar5 = *(byte *)(param_3 + 0x230);
    local_1b8 = (float)(uint)*(byte *)(param_4 + 0xbbe);
    fStack_1b4 = 0.0;
    uVar45 = (uint)*(byte *)(param_4 + 0xbbe) * (uint)bVar4;
    local_1d0 = (ulong)uVar45;
    local_1a0 = ((uint)*(byte *)(param_4 + 0xbbe + (ulong)*(byte *)(param_4 + 0xbbd)) -
                (uint)*(byte *)(param_1 + 0x40)) * (uint)bVar4 + (uint)bVar5;
    uVar41 = local_1a0 - uVar45;
    local_1f0 = param_4;
    if (uVar45 <= local_1a0 && uVar41 != 0) {
      iVar42 = (uint)*(byte *)(param_3 + 0x3a + (ulong)*(byte *)(param_3 + 0x231) * 8) +
               (uint)*(byte *)(param_3 + 0x3c + (ulong)*(byte *)(param_3 + 0x231) * 8);
      local_1f8 = (ulong)(0x40 - iVar42) << 2;
      uVar54 = (ulong)(uint)local_1b8 * (ulong)bVar4;
      uVar44 = (ulong)local_1a0;
      uVar56 = (ulong)(uint)(iVar42 * 4);
      do {
        ___bzero(param_6[uVar54] + uVar56,local_1f8);
        ___bzero(param_7[uVar54] + uVar56,local_1f8);
        uVar54 = uVar54 + 1;
      } while (uVar54 < uVar44);
    }
    uVar56 = (ulong)*(byte *)(param_3 + 0x232);
    bVar6 = *(byte *)(param_3 + 0x233);
    uVar45 = (uint)bVar5;
    if (*(byte *)(param_3 + 0x232) < bVar6) {
      uVar44 = (ulong)bVar5 + 6;
      lVar1 = (ulong)bVar5 + 7;
      local_1fc = (uint)local_1d0 & 3;
      uVar41 = ((uVar41 >> 2) + 1) - (uint)((uVar41 & 3) == 0);
      uVar54 = (ulong)((uint)local_1d0 * 4 & 0xfffffff0);
      local_1f8 = (ulong)uVar41 * 4;
      iVar42 = (uint)bVar4 * (int)local_1b8;
      do {
        local_1b8 = *(float *)(*(long *)(param_3 + 0x238) + uVar56 * 4);
        fStack_1b4 = 0.0;
        fStack_1b0 = 0.0;
        fStack_1ac = 0.0;
        local_e8[0] = local_1b8;
        fVar57 = *(float *)(*(long *)(param_3 + 0x248) + uVar56 * 4);
        local_198[0] = fVar57;
        uVar49 = *(uint *)(*(long *)(param_3 + 0x240) + uVar56 * 4);
        local_e8[1] = (float)uVar49;
        uVar51 = *(uint *)(*(long *)(param_3 + 0x250) + uVar56 * 4);
        local_198[1] = (float)uVar51;
        local_e0[0] = *(float *)(*param_6 + uVar56 * 4);
        local_190[0] = *(float *)(*param_7 + uVar56 * 4);
        local_e0[1] = (float)*(undefined4 *)(param_6[1] + uVar56 * 4);
        local_190[1] = (float)*(undefined4 *)(param_7[1] + uVar56 * 4);
        local_d8[0] = *(float *)(param_6[2] + uVar56 * 4);
        local_188[0] = *(float *)(param_7[2] + uVar56 * 4);
        local_d8[1] = (float)*(undefined4 *)(param_6[3] + uVar56 * 4);
        local_188[1] = (float)*(undefined4 *)(param_7[3] + uVar56 * 4);
        local_d8[2] = (float)*(undefined4 *)(param_6[4] + uVar56 * 4);
        local_188[2] = (float)*(undefined4 *)(param_7[4] + uVar56 * 4);
        local_d8[3] = (float)*(undefined4 *)(param_6[5] + uVar56 * 4);
        local_188[3] = (float)*(undefined4 *)(param_7[5] + uVar56 * 4);
        if (bVar5 == 0) {
          uVar55 = 6;
LAB_10011a040:
          fStack_1ac = 0.0;
          fStack_1b0 = 0.0;
          fStack_1b4 = 0.0;
          uVar46 = (ulong)(uint)((int)uVar55 * 4);
          local_1e8 = ZEXT416(uVar49);
          ___bzero((long)local_190 + uVar46);
          ___bzero((long)local_e0 + uVar46,(ulong)((int)uVar55 * -4 + 0xa4) + 4);
          auVar67 = local_1e8;
        }
        else {
          uVar55 = 6;
          do {
            uVar46 = uVar55;
            local_e0[uVar46] = *(float *)(param_6[uVar46] + uVar56 * 4);
            local_190[uVar46] = *(float *)(param_7[uVar46] + uVar56 * 4);
            local_e0[uVar46 + 1] = *(float *)(param_6[uVar46 + 1] + uVar56 * 4);
            local_190[uVar46 + 1] = *(float *)(param_7[uVar46 + 1] + uVar56 * 4);
            local_d8[uVar46] = *(float *)(param_6[uVar46 + 2] + uVar56 * 4);
            local_188[uVar46] = *(float *)(param_7[uVar46 + 2] + uVar56 * 4);
            local_d8[uVar46 + 1] = *(float *)(param_6[uVar46 + 3] + uVar56 * 4);
            local_188[uVar46 + 1] = *(float *)(param_7[uVar46 + 3] + uVar56 * 4);
            uVar55 = uVar46 + 4;
          } while (uVar55 < uVar44);
          auVar67 = ZEXT416(uVar49);
          if (uVar46 < 0x26) goto LAB_10011a040;
        }
        local_200 = 0.0;
        local_1bc = 0.0;
        local_1c8 = 0.0;
        local_1c0 = 0.0;
        local_1c4 = 0.0;
        fVar64 = *(float *)((long)local_d8 + (ulong)(uVar45 * 4) + 8);
        fVar65 = *(float *)((long)local_188 + (ulong)(uVar45 * 4) + 8);
        fVar73 = *(float *)((long)local_d8 + (ulong)(uVar45 * 4) + 0xc);
        fVar75 = *(float *)((long)local_188 + (ulong)(uVar45 * 4) + 0xc);
        local_1e8._0_4_ = fVar73 * fVar64 + fVar65 * fVar75;
        auVar70._0_4_ = auVar67._0_4_ ^ _DAT_100700430;
        auVar70._4_4_ = auVar67._4_4_ ^ _UNK_100700434;
        auVar70._8_4_ = auVar67._8_4_ ^ _UNK_100700438;
        auVar70._12_4_ = auVar67._12_4_ ^ _UNK_10070043c;
        auVar67 = insertps(auVar67,ZEXT416(uVar51),0x10);
        auVar70 = insertps(ZEXT416(uVar51),auVar70,0x10);
        fVar58 = local_1b8 * auVar67._0_4_;
        fVar59 = local_1b8 * auVar67._4_4_;
        fVar60 = fStack_1b0 * auVar67._8_4_;
        fVar61 = fStack_1b0 * auVar67._12_4_;
        local_19c = 0.0;
        local_1b8 = local_1b8 * local_1b8 + fVar57 * fVar57;
        _vDSP_dotpr(local_e8,1,local_e8,1,&local_19c,lVar1);
        _vDSP_dotpr(local_198,1,local_198,1,&local_1c4,lVar1);
        local_1c4 = local_19c + local_1c4;
        _vDSP_dotpr(local_e8 + 1,1,local_e8,1,&local_19c,lVar1);
        _vDSP_dotpr(local_198 + 1,1,local_198,1,&local_1c0,lVar1);
        local_1c0 = local_19c + local_1c0;
        _vDSP_dotpr(local_198 + 1,1,local_e8,1,&local_1c8,lVar1);
        _vDSP_dotpr(local_e8 + 1,1,local_198,1,&local_19c,lVar1);
        local_1c8 = local_1c8 - local_19c;
        fVar62 = local_1c4 - local_1b8;
        local_1b8 = local_1c4 - (fVar64 * fVar64 + fVar65 * fVar65);
        fVar63 = local_1c0 - (float)local_1e8._0_4_;
        auVar67 = insertps(ZEXT416((uint)local_1c0),ZEXT416((uint)local_1c8),0x10);
        fVar58 = auVar67._0_4_ - (fVar58 + auVar70._0_4_ * fVar57);
        fVar59 = auVar67._4_4_ - (fVar59 + auVar70._4_4_ * fVar57);
        fVar60 = auVar67._8_4_ - (fVar60 + auVar70._8_4_ * 0.0);
        fVar57 = local_1c8 - (fVar75 * fVar64 - fVar65 * fVar73);
        _vDSP_dotpr(local_e0,1,local_e8,1,&local_19c,uVar44);
        _vDSP_dotpr(local_190,1,local_198,1,&local_1bc,uVar44);
        local_1bc = local_19c + local_1bc;
        _vDSP_dotpr(local_190,1,local_e8,1,&local_200,uVar44);
        _vDSP_dotpr(local_e0,1,local_198,1,&local_19c,uVar44);
        fVar64 = local_1b8 * fVar62 - (fVar63 * fVar63 + fVar57 * fVar57);
        if ((fVar64 != 0.0) || (NAN(fVar64))) {
          auVar66 = insertps(ZEXT416((uint)local_1bc),ZEXT416((uint)(local_200 - local_19c)),0x10);
          local_1b8 = (DAT_100700b50 / fVar64) *
                      ((fVar63 * fVar58 + (float)((uint)fVar59 ^ _DAT_100700430) * fVar57) -
                      fVar62 * auVar66._0_4_);
          fStack_1b4 = (DAT_100700b50 / fVar64) *
                       ((fVar63 * fVar59 + fVar58 * fVar57) - fVar62 * auVar66._4_4_);
          fStack_1b0 = ((fVar60 * 0.0 + fVar60 * 0.0) - auVar66._8_4_ * 0.0) * 0.0;
          fStack_1ac = (((auVar67._12_4_ - (fVar61 + auVar70._12_4_ * 0.0)) * 0.0 + fVar60 * 0.0) -
                       auVar66._12_4_ * 0.0) * 0.0;
          fVar64 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
          bVar16 = fVar64 < DAT_100705eb8;
          if ((fVar62 != 0.0) || (NAN(fVar62))) goto LAB_10011a536;
          local_1e8 = ZEXT816(0);
          fVar65 = 0.0;
          if (fVar64 < DAT_100705eb8) goto LAB_10011a5c1;
LAB_10011a5aa:
          local_1b8 = 0.0;
          fStack_1b4 = 0.0;
          fStack_1b0 = 0.0;
          fStack_1ac = 0.0;
          local_1e8 = ZEXT816(0);
          fVar65 = 0.0;
        }
        else {
          local_1b8 = 0.0;
          fStack_1b4 = 0.0;
          fStack_1b0 = 0.0;
          fStack_1ac = 0.0;
          bVar16 = true;
          local_1e8 = ZEXT816(0);
          fVar65 = 0.0;
          if ((fVar62 != 0.0) || (NAN(fVar62))) {
LAB_10011a536:
            local_1e8._0_4_ =
                 (float)((uint)(fStack_1b4 * fVar57 + local_1b8 * fVar63 + fVar58) ^ _DAT_100700430)
                 * (DAT_100700b50 / fVar62);
            fVar65 = (float)((uint)((fStack_1b4 * fVar63 + fVar59) - fVar57 * local_1b8) ^
                            _DAT_100700430) * (DAT_100700b50 / fVar62);
            local_1e8._4_4_ = (uint)fStack_1b4 ^ _UNK_100700434;
            local_1e8._8_4_ = (uint)fStack_1ac ^ _UNK_100700438;
            local_1e8._12_4_ = (uint)fStack_1ac ^ _UNK_10070043c;
            if ((DAT_100705eb8 <= (float)local_1e8._0_4_ * (float)local_1e8._0_4_ + fVar65 * fVar65)
               || (!bVar16)) goto LAB_10011a5aa;
          }
        }
LAB_10011a5c1:
        lVar2 = param_3 + 0x70 + uVar56 * 0xe;
        uVar55 = (ulong)*(byte *)(param_3 + 0x7c + uVar56 * 0xe);
        uVar49 = (uint)local_1d0;
        if (local_1fc == 0) {
          if (uVar55 != 0) {
            uVar46 = 0;
            do {
              fVar57 = *(float *)(local_1f0 + 0xbe0 + (ulong)*(byte *)(lVar2 + uVar46) * 4);
              lVar53 = *(byte *)(param_3 + 0x43 + (ulong)*(byte *)(lVar2 + 6 + uVar46) * 8) + uVar56
              ;
              if ((fVar57 != 0.0) || (NAN(fVar57))) {
                if (uVar41 != 0) {
                  fVar64 = *(float *)(local_1f0 + 0xbf8 + (ulong)*(byte *)(lVar2 + uVar46) * 4);
                  fVar69 = (float)local_1e8._0_4_ * fVar57;
                  fVar68 = local_1b8 * fVar64;
                  fVar57 = fVar57 * fVar65;
                  fVar64 = fVar64 * fStack_1b4;
                  lVar47 = 0;
                  fVar73 = *(float *)((long)local_198 + uVar54);
                  fVar75 = *(float *)((long)local_190 + (uVar54 - 4));
                  fVar58 = *(float *)((long)local_190 + uVar54);
                  fVar59 = *(float *)((long)local_190 + uVar54 + 4);
                  fVar60 = *(float *)((long)local_e8 + uVar54);
                  fVar61 = *(float *)((long)local_e0 + (uVar54 - 4));
                  fVar62 = *(float *)((long)local_e0 + uVar54);
                  fVar63 = *(float *)((long)local_e0 + uVar54 + 4);
                  do {
                    iVar26 = (int)lVar47;
                    pfVar3 = (float *)((long)local_d8 + lVar47 * 4 + (uVar54 - 0xd8) + 0xd8);
                    fVar17 = *pfVar3;
                    fVar18 = pfVar3[1];
                    fVar19 = pfVar3[2];
                    fVar20 = pfVar3[3];
                    pfVar3 = (float *)((long)local_188 + lVar47 * 4 + uVar54);
                    fVar27 = *pfVar3;
                    fVar28 = pfVar3[1];
                    fVar29 = pfVar3[2];
                    fVar30 = pfVar3[3];
                    fVar74 = ((fVar69 * fVar61 + fVar68 * fVar60) -
                             (fVar57 * fVar75 + fVar64 * fVar73)) + fVar62;
                    fVar76 = ((fVar69 * fVar62 + fVar68 * fVar61) -
                             (fVar57 * fVar58 + fVar64 * fVar75)) + fVar63;
                    fVar77 = ((fVar69 * fVar63 + fVar68 * fVar62) -
                             (fVar57 * fVar59 + fVar64 * fVar58)) + fVar17;
                    fVar78 = ((fVar69 * fVar17 + fVar68 * fVar63) -
                             (fVar57 * fVar27 + fVar64 * fVar59)) + fVar18;
                    auVar72._0_4_ =
                         fVar75 * fVar69 + fVar73 * fVar68 + fVar61 * fVar57 + fVar60 * fVar64 +
                         fVar58;
                    auVar72._4_4_ =
                         fVar58 * fVar69 + fVar75 * fVar68 + fVar62 * fVar57 + fVar61 * fVar64 +
                         fVar59;
                    auVar72._8_4_ =
                         fVar59 * fVar69 + fVar58 * fVar68 + fVar63 * fVar57 + fVar62 * fVar64 +
                         fVar27;
                    auVar72._12_4_ =
                         fVar27 * fVar69 + fVar59 * fVar68 + fVar17 * fVar57 + fVar63 * fVar64 +
                         fVar28;
                    *(float *)(param_6[(uint)(iVar26 + iVar42)] + lVar53 * 4) = fVar74;
                    uVar51 = iVar42 + 1 + iVar26;
                    *(float *)(param_7[(uint)(iVar26 + iVar42)] + lVar53 * 4) = auVar72._0_4_;
                    auVar67._4_4_ = fVar76;
                    auVar67._0_4_ = fVar74;
                    auVar67._8_4_ = fVar77;
                    auVar67._12_4_ = fVar78;
                    uVar43 = extractps(auVar67,1);
                    *(undefined8 *)(param_6[uVar51] + lVar53 * 4) = uVar43;
                    uVar43 = extractps(auVar72,1);
                    *(undefined8 *)(param_7[uVar51] + lVar53 * 4) = uVar43;
                    uVar51 = iVar42 + 2 + iVar26;
                    auVar66._4_4_ = fVar76;
                    auVar66._0_4_ = fVar74;
                    auVar66._8_4_ = fVar77;
                    auVar66._12_4_ = fVar78;
                    uVar43 = extractps(auVar66,2);
                    *(undefined8 *)(param_6[uVar51] + lVar53 * 4) = uVar43;
                    uVar52 = iVar42 + 3 + iVar26;
                    uVar43 = extractps(auVar72,2);
                    *(undefined8 *)(param_7[uVar51] + lVar53 * 4) = uVar43;
                    auVar79._4_4_ = fVar76;
                    auVar79._0_4_ = fVar74;
                    auVar79._8_4_ = fVar77;
                    auVar79._12_4_ = fVar78;
                    uVar43 = extractps(auVar79,3);
                    *(undefined8 *)(param_6[uVar52] + lVar53 * 4) = uVar43;
                    uVar43 = extractps(auVar72,3);
                    *(undefined8 *)(param_7[uVar52] + lVar53 * 4) = uVar43;
                    lVar47 = lVar47 + 4;
                    fVar73 = fVar27;
                    fVar75 = fVar28;
                    fVar58 = fVar29;
                    fVar59 = fVar30;
                    fVar60 = fVar17;
                    fVar61 = fVar18;
                    fVar62 = fVar19;
                    fVar63 = fVar20;
                  } while (local_1f8 != lVar47);
                }
              }
              else {
                uVar48 = local_1d0 & 0xffffffff;
                uVar51 = uVar49;
                while (uVar51 < local_1a0) {
                  iVar26 = (int)uVar48;
                  uVar51 = iVar26 + 2;
                  uVar50 = (ulong)uVar51;
                  *(float *)(param_6[uVar48] + lVar53 * 4) = local_e8[uVar50];
                  *(float *)(param_7[uVar48] + lVar53 * 4) = local_198[uVar50];
                  *(float *)(param_6[iVar26 + 1U] + lVar53 * 4) = local_e8[iVar26 + 3U];
                  *(float *)(param_7[iVar26 + 1U] + lVar53 * 4) = local_198[iVar26 + 3U];
                  uVar48 = uVar50;
                }
              }
              uVar46 = uVar46 + 1;
            } while (uVar46 != uVar55);
          }
        }
        else if (local_1fc == 2) {
          if (uVar55 != 0) {
            uVar46 = 0;
            do {
              fVar57 = *(float *)(local_1f0 + 0xbe0 + (ulong)*(byte *)(lVar2 + uVar46) * 4);
              lVar53 = *(byte *)(param_3 + 0x43 + (ulong)*(byte *)(lVar2 + 6 + uVar46) * 8) + uVar56
              ;
              if ((fVar57 != 0.0) || (NAN(fVar57))) {
                if (uVar41 != 0) {
                  fVar64 = *(float *)(local_1f0 + 0xbf8 + (ulong)*(byte *)(lVar2 + uVar46) * 4);
                  fVar68 = (float)local_1e8._0_4_ * fVar57;
                  fVar69 = local_1b8 * fVar64;
                  fVar57 = fVar57 * fVar65;
                  fVar64 = fVar64 * fStack_1b4;
                  lVar47 = 0;
                  fVar73 = *(float *)((long)local_198 + uVar54);
                  fVar75 = *(float *)((long)local_190 + (uVar54 - 4));
                  fVar58 = *(float *)((long)local_190 + uVar54);
                  fVar59 = *(float *)((long)local_190 + uVar54 + 4);
                  fVar60 = *(float *)((long)local_e8 + uVar54);
                  fVar61 = *(float *)((long)local_e0 + (uVar54 - 4));
                  fVar62 = *(float *)((long)local_e0 + uVar54);
                  fVar63 = *(float *)((long)local_e0 + uVar54 + 4);
                  do {
                    iVar26 = (int)lVar47;
                    auVar67 = *(undefined1 (*) [16])
                               ((long)local_d8 + lVar47 * 4 + (uVar54 - 0xd8) + 0xd8);
                    fVar17 = auVar67._0_4_;
                    fVar19 = auVar67._4_4_;
                    auVar70 = *(undefined1 (*) [16])((long)local_188 + lVar47 * 4 + uVar54);
                    fVar18 = auVar70._0_4_;
                    fVar20 = auVar70._4_4_;
                    auVar22._4_4_ = fVar61;
                    auVar22._0_4_ = fVar60;
                    auVar22._8_4_ = fVar62;
                    auVar22._12_4_ = fVar63;
                    auVar79 = blendps(auVar67,auVar22,8);
                    auVar21._4_4_ = fVar75;
                    auVar21._0_4_ = fVar73;
                    auVar21._8_4_ = fVar58;
                    auVar21._12_4_ = fVar59;
                    auVar66 = blendps(auVar70,auVar21,8);
                    fVar73 = ((fVar68 * auVar79._12_4_ + fVar69 * fVar62) -
                             (fVar57 * auVar66._12_4_ + fVar64 * fVar58)) + fVar17;
                    fVar75 = ((fVar68 * auVar79._0_4_ + fVar69 * fVar63) -
                             (fVar57 * auVar66._0_4_ + fVar64 * fVar59)) + fVar19;
                    fVar60 = ((fVar68 * auVar79._4_4_ + fVar69 * fVar17) -
                             (fVar57 * auVar66._4_4_ + fVar64 * fVar18)) + auVar67._8_4_;
                    fVar61 = ((fVar68 * auVar79._8_4_ + fVar69 * fVar19) -
                             (fVar57 * auVar66._8_4_ + fVar64 * fVar20)) + auVar67._12_4_;
                    auVar71._0_4_ =
                         auVar66._12_4_ * fVar68 + fVar58 * fVar69 +
                         auVar79._12_4_ * fVar57 + fVar62 * fVar64 + fVar18;
                    auVar71._4_4_ =
                         auVar66._0_4_ * fVar68 + fVar59 * fVar69 +
                         auVar79._0_4_ * fVar57 + fVar63 * fVar64 + fVar20;
                    auVar71._8_4_ =
                         auVar66._4_4_ * fVar68 + fVar18 * fVar69 +
                         auVar79._4_4_ * fVar57 + fVar17 * fVar64 + auVar70._8_4_;
                    auVar71._12_4_ =
                         auVar66._8_4_ * fVar68 + fVar20 * fVar69 +
                         auVar79._8_4_ * fVar57 + fVar19 * fVar64 + auVar70._12_4_;
                    *(float *)(param_6[(uint)(iVar26 + iVar42)] + lVar53 * 4) = fVar73;
                    uVar51 = iVar42 + 1 + iVar26;
                    *(float *)(param_7[(uint)(iVar26 + iVar42)] + lVar53 * 4) = auVar71._0_4_;
                    auVar23._4_4_ = fVar75;
                    auVar23._0_4_ = fVar73;
                    auVar23._8_4_ = fVar60;
                    auVar23._12_4_ = fVar61;
                    uVar43 = extractps(auVar23,1);
                    *(undefined8 *)(param_6[uVar51] + lVar53 * 4) = uVar43;
                    uVar43 = extractps(auVar71,1);
                    *(undefined8 *)(param_7[uVar51] + lVar53 * 4) = uVar43;
                    uVar51 = iVar42 + 2 + iVar26;
                    auVar24._4_4_ = fVar75;
                    auVar24._0_4_ = fVar73;
                    auVar24._8_4_ = fVar60;
                    auVar24._12_4_ = fVar61;
                    uVar43 = extractps(auVar24,2);
                    *(undefined8 *)(param_6[uVar51] + lVar53 * 4) = uVar43;
                    uVar52 = iVar42 + 3 + iVar26;
                    uVar43 = extractps(auVar71,2);
                    *(undefined8 *)(param_7[uVar51] + lVar53 * 4) = uVar43;
                    auVar25._4_4_ = fVar75;
                    auVar25._0_4_ = fVar73;
                    auVar25._8_4_ = fVar60;
                    auVar25._12_4_ = fVar61;
                    uVar43 = extractps(auVar25,3);
                    *(undefined8 *)(param_6[uVar52] + lVar53 * 4) = uVar43;
                    uVar43 = extractps(auVar71,3);
                    *(undefined8 *)(param_7[uVar52] + lVar53 * 4) = uVar43;
                    lVar47 = lVar47 + 4;
                    fVar73 = fVar18;
                    fVar75 = fVar20;
                    fVar58 = auVar70._8_4_;
                    fVar59 = auVar70._12_4_;
                    fVar60 = fVar17;
                    fVar61 = fVar19;
                    fVar62 = auVar67._8_4_;
                    fVar63 = auVar67._12_4_;
                  } while (local_1f8 != lVar47);
                }
              }
              else {
                uVar48 = local_1d0 & 0xffffffff;
                uVar51 = uVar49;
                while (uVar51 < local_1a0) {
                  iVar26 = (int)uVar48;
                  uVar51 = iVar26 + 2;
                  uVar50 = (ulong)uVar51;
                  *(float *)(param_6[uVar48] + lVar53 * 4) = local_e8[uVar50];
                  *(float *)(param_7[uVar48] + lVar53 * 4) = local_198[uVar50];
                  *(float *)(param_6[iVar26 + 1U] + lVar53 * 4) = local_e8[iVar26 + 3U];
                  *(float *)(param_7[iVar26 + 1U] + lVar53 * 4) = local_198[iVar26 + 3U];
                  uVar48 = uVar50;
                }
              }
              uVar46 = uVar46 + 1;
            } while (uVar46 != uVar55);
          }
        }
        else if (uVar55 != 0) {
          uVar46 = 0;
          do {
            fVar57 = *(float *)(local_1f0 + 0xbe0 + (ulong)*(byte *)(lVar2 + uVar46) * 4);
            lVar53 = *(byte *)(param_3 + 0x43 + (ulong)*(byte *)(lVar2 + 6 + uVar46) * 8) + uVar56;
            if (fVar57 <= 0.0) {
              uVar48 = local_1d0 & 0xffffffff;
              uVar51 = uVar49;
              while (uVar51 < local_1a0) {
                iVar26 = (int)uVar48;
                uVar51 = iVar26 + 2;
                uVar50 = (ulong)uVar51;
                *(float *)(param_6[uVar48] + lVar53 * 4) = local_e8[uVar50];
                *(float *)(param_7[uVar48] + lVar53 * 4) = local_198[uVar50];
                *(float *)(param_6[iVar26 + 1U] + lVar53 * 4) = local_e8[iVar26 + 3U];
                *(float *)(param_7[iVar26 + 1U] + lVar53 * 4) = local_198[iVar26 + 3U];
                uVar48 = uVar50;
              }
            }
            else if (uVar49 < local_1a0) {
              fVar64 = *(float *)(local_1f0 + 0xbf8 + (ulong)*(byte *)(lVar2 + uVar46) * 4);
              fVar73 = (float)local_1e8._0_4_ * fVar57;
              fVar75 = local_1b8 * fVar64;
              fVar57 = fVar57 * fVar65;
              fVar64 = fVar64 * fStack_1b4;
              fVar58 = (float)((uint)fVar57 ^ _DAT_100700430);
              fVar59 = (float)((uint)fVar64 ^ _DAT_100700430);
              uVar48 = local_1d0;
              do {
                iVar26 = (int)uVar48;
                uVar50 = (ulong)(iVar26 + 2U);
                uVar51 = iVar26 + 1;
                fVar60 = local_e8[uVar51];
                fVar61 = local_198[uVar51];
                uVar48 = uVar48 & 0xffffffff;
                fVar62 = local_e8[uVar48];
                fVar63 = local_198[uVar48];
                fVar68 = local_e8[uVar50];
                fVar69 = local_198[uVar50];
                *(float *)(param_6[uVar48] + lVar53 * 4) =
                     fVar59 * fVar63 + fVar75 * fVar62 + fVar73 * fVar60 + fVar61 * fVar58 + fVar68;
                *(float *)(param_7[uVar48] + lVar53 * 4) =
                     fVar63 * fVar75 + fVar62 * fVar64 + fVar57 * fVar60 + fVar73 * fVar61 +
                     local_198[uVar50];
                *(float *)(param_6[uVar51] + lVar53 * 4) =
                     fVar59 * fVar61 + fVar75 * fVar60 + fVar73 * fVar68 + fVar69 * fVar58 +
                     local_e8[iVar26 + 3U];
                *(float *)(param_7[uVar51] + lVar53 * 4) =
                     fVar61 * fVar75 + fVar60 * fVar64 + fVar57 * fVar68 + fVar69 * fVar73 +
                     local_198[iVar26 + 3U];
                uVar48 = uVar50;
              } while (iVar26 + 2U < local_1a0);
            }
            uVar46 = uVar46 + 1;
          } while (uVar46 != uVar55);
        }
        uVar56 = uVar56 + 1;
      } while (uVar56 != bVar6);
    }
    lVar1 = local_1f0;
    bVar4 = *(byte *)(param_3 + 0x42);
    if ((ulong)bVar4 != 0) {
      lVar2 = param_6[uVar45 - 2];
      lVar53 = *(long *)(param_3 + 0x238);
      lVar47 = *(long *)(param_3 + 0x240);
      lVar7 = param_6[uVar45 - 1];
      lVar8 = param_7[uVar45 - 2];
      lVar9 = *(long *)(param_3 + 0x248);
      lVar10 = param_7[uVar45 - 1];
      lVar11 = *(long *)(param_3 + 0x250);
      uVar56 = 0;
      do {
        *(undefined4 *)(lVar53 + uVar56 * 4) = *(undefined4 *)(lVar2 + uVar56 * 4);
        *(undefined4 *)(lVar47 + uVar56 * 4) = *(undefined4 *)(lVar7 + uVar56 * 4);
        *(undefined4 *)(lVar9 + uVar56 * 4) = *(undefined4 *)(lVar8 + uVar56 * 4);
        *(undefined4 *)(lVar11 + uVar56 * 4) = *(undefined4 *)(lVar10 + uVar56 * 4);
        uVar56 = uVar56 + 1;
      } while (bVar4 != uVar56);
    }
    if (*(char *)(local_1f0 + 0xe9c) == '\0') {
      iVar42 = FUN_10011b62a(param_1,param_3 + 0x20,local_1f0,param_6,param_7,param_2);
    }
    else {
      iVar42 = FUN_10011bf94(param_1,param_3 + 0x20,local_1f0,param_6,param_7,param_2);
    }
    uVar43 = 0xfffffffe;
    if (iVar42 != 0) goto LAB_10011b1a1;
    *(undefined4 *)(param_5 + 0xfc) = *(undefined4 *)(lVar1 + 0xc10);
    *(undefined1 *)(param_5 + 0x116) = *(undefined1 *)(lVar1 + 0xe84);
    *(undefined1 *)(param_5 + 0x114) = *(undefined1 *)(lVar1 + 3000);
    *(undefined4 *)(param_5 + 0xec) =
         *(undefined4 *)
          (&DAT_100705e68 + (ulong)(*(uint *)(lVar1 + 0xbd8) == (uint)*(byte *)(lVar1 + 0xbbd)) * 4)
    ;
  }
  uVar43 = 0;
LAB_10011b1a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar43;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

