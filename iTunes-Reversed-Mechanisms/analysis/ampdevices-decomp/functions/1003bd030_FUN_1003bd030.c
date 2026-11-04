// name: FUN_1003bd030
// address: 1003bd030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003bd030(long param_1,int param_2,uint param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  uint uVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  uint uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  uint uVar47;
  float fVar48;
  uint uVar49;
  float fVar50;
  uint uVar51;
  float fVar52;
  uint uVar53;
  float fVar54;
  uint uVar55;
  float fVar56;
  uint uVar57;
  float fVar58;
  uint uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  uint uVar70;
  float fVar71;
  uint uVar72;
  float fVar73;
  uint uVar74;
  float fVar75;
  uint uVar76;
  float fVar77;
  uint uVar78;
  float fVar79;
  uint uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar15 = *(long *)(param_1 + 0x4f98);
  lVar20 = (long)param_5 * 0x900;
  bVar21 = lVar15 != param_1 + lVar20 + 0x7164;
  bVar22 = lVar15 != param_1 + 0x4698;
  if (DAT_1008c5d60 == '\0') {
    if (bVar22 && bVar21) {
      uVar12 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar12,0x10);
      if (cVar11 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(frame->reorderedPtr == &frame->dequantized[channel]) || (frame->reorderedPtr == &frame->reordered)"
        ;
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar7 = _DAT_100700430;
    if ((int)param_3 <= param_4) {
      lVar13 = *(long *)(param_1 + 0x4f98);
      lVar14 = (long)param_2 * 0x90;
      uVar16 = (ulong)(int)param_3;
      lVar15 = lVar13 + uVar16 * 0x48;
      do {
        fVar83 = *(float *)(lVar13 + uVar16 * 0x48);
        fVar69 = DAT_1008be0c0 * fVar83;
        fVar82 = DAT_1008be0c4 * fVar83;
        fVar66 = _DAT_1008be0f8 * fVar83;
        fVar67 = fRam00000001008be0fc * fVar83;
        fVar68 = _DAT_1008be100 * fVar83;
        fVar60 = fRam00000001008be104 * fVar83;
        fVar71 = _DAT_1008be0e8 * fVar83;
        fVar73 = fRam00000001008be0ec * fVar83;
        fVar75 = _DAT_1008be0f0 * fVar83;
        fVar65 = fRam00000001008be0f4 * fVar83;
        fVar84 = _DAT_1008be0d8 * fVar83;
        fVar25 = fRam00000001008be0dc * fVar83;
        fVar85 = _DAT_1008be0e0 * fVar83;
        fVar86 = fRam00000001008be0e4 * fVar83;
        fVar77 = fVar83 * _DAT_1008be0c8;
        fVar79 = fVar83 * fRam00000001008be0cc;
        fVar81 = fVar83 * _DAT_1008be0d0;
        fVar83 = fVar83 * fRam00000001008be0d4;
        lVar17 = 1;
        pfVar19 = &DAT_1008be110;
        do {
          fVar61 = *(float *)(lVar15 + lVar17 * 4);
          fVar69 = fVar69 + *pfVar19 * fVar61;
          fVar82 = fVar82 + pfVar19[1] * fVar61;
          fVar66 = fVar66 + pfVar19[0xe] * fVar61;
          fVar67 = fVar67 + pfVar19[0xf] * fVar61;
          fVar68 = fVar68 + pfVar19[0x10] * fVar61;
          fVar60 = fVar60 + pfVar19[0x11] * fVar61;
          fVar71 = fVar71 + pfVar19[10] * fVar61;
          fVar73 = fVar73 + pfVar19[0xb] * fVar61;
          fVar75 = fVar75 + pfVar19[0xc] * fVar61;
          fVar65 = fVar65 + pfVar19[0xd] * fVar61;
          fVar84 = fVar84 + pfVar19[6] * fVar61;
          fVar25 = fVar25 + pfVar19[7] * fVar61;
          fVar85 = fVar85 + pfVar19[8] * fVar61;
          fVar86 = fVar86 + pfVar19[9] * fVar61;
          fVar77 = fVar77 + fVar61 * pfVar19[2];
          fVar79 = fVar79 + fVar61 * pfVar19[3];
          fVar81 = fVar81 + fVar61 * pfVar19[4];
          fVar83 = fVar83 + fVar61 * pfVar19[5];
          pfVar19 = pfVar19 + 0x14;
          lVar17 = lVar17 + 1;
        } while ((int)lVar17 != 0x12);
        pfVar19 = (float *)(param_1 + 0x4fa8 + lVar20 + uVar16 * 0x48);
        *(float *)(param_1 + 25000 + uVar16 * 0x48) =
             *pfVar19 - fVar86 * *(float *)(&DAT_1008c54f0 + lVar14);
        if ((uVar16 & 1) == 0) {
          *(float *)(param_1 + 0x61ac + uVar16 * 0x48) =
               pfVar19[1] - *(float *)(&DAT_1008c54f4 + lVar14) * fVar71;
          *(float *)(param_1 + 0x61b0 + uVar16 * 0x48) =
               (float)((uint)fVar73 ^ uVar7) * *(float *)(&DAT_1008c54f8 + lVar14) + pfVar19[2];
          *(float *)(param_1 + 0x61b4 + uVar16 * 0x48) =
               pfVar19[3] - *(float *)(&DAT_1008c54fc + lVar14) * fVar75;
          *(float *)(param_1 + 0x61b8 + uVar16 * 0x48) =
               (float)((uint)fVar65 ^ uVar7) * *(float *)(&DAT_1008c5500 + lVar14) + pfVar19[4];
          *(float *)(param_1 + 0x61bc + uVar16 * 0x48) =
               pfVar19[5] - *(float *)(&DAT_1008c5504 + lVar14) * fVar66;
          *(float *)(param_1 + 0x61c0 + uVar16 * 0x48) =
               pfVar19[6] - *(float *)(&DAT_1008c5508 + lVar14) * fVar67;
          *(float *)(param_1 + 0x61c4 + uVar16 * 0x48) =
               pfVar19[7] - *(float *)(&DAT_1008c550c + lVar14) * fVar68;
          *(float *)(param_1 + 0x61c8 + uVar16 * 0x48) =
               pfVar19[8] - *(float *)(&DAT_1008c5510 + lVar14) * fVar60;
          *(float *)(param_1 + 0x61cc + uVar16 * 0x48) =
               fVar60 * *(float *)(&DAT_1008c5514 + lVar14) + pfVar19[9];
          *(float *)(param_1 + 0x61d0 + uVar16 * 0x48) =
               fVar68 * *(float *)(&DAT_1008c5518 + lVar14) + pfVar19[10];
          *(float *)(param_1 + 0x61d4 + uVar16 * 0x48) =
               fVar67 * *(float *)(&DAT_1008c551c + lVar14) + pfVar19[0xb];
          *(float *)(param_1 + 0x61d8 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c5520 + lVar14) * fVar66 + pfVar19[0xc];
          *(float *)(param_1 + 0x61dc + uVar16 * 0x48) =
               *(float *)(&DAT_1008c5524 + lVar14) * fVar65 + pfVar19[0xd];
          *(float *)(param_1 + 0x61e0 + uVar16 * 0x48) =
               fVar75 * *(float *)(&DAT_1008c5528 + lVar14) + pfVar19[0xe];
          *(float *)(param_1 + 0x61e4 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c552c + lVar14) * fVar73 + pfVar19[0xf];
          *(float *)(param_1 + 0x61e8 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c5530 + lVar14) * fVar71 + pfVar19[0x10];
          fVar86 = *(float *)(&DAT_1008c5534 + lVar14) * fVar86 + pfVar19[0x11];
        }
        else {
          *(float *)(param_1 + 0x61ac + uVar16 * 0x48) =
               *(float *)(&DAT_1008c54f4 + lVar14) * fVar71 - pfVar19[1];
          *(float *)(param_1 + 0x61b0 + uVar16 * 0x48) =
               (float)((uint)fVar73 ^ uVar7) * *(float *)(&DAT_1008c54f8 + lVar14) + pfVar19[2];
          *(float *)(param_1 + 0x61b4 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c54fc + lVar14) * fVar75 - pfVar19[3];
          *(float *)(param_1 + 0x61b8 + uVar16 * 0x48) =
               (float)((uint)fVar65 ^ uVar7) * *(float *)(&DAT_1008c5500 + lVar14) + pfVar19[4];
          *(float *)(param_1 + 0x61bc + uVar16 * 0x48) =
               *(float *)(&DAT_1008c5504 + lVar14) * fVar66 - pfVar19[5];
          *(float *)(param_1 + 0x61c0 + uVar16 * 0x48) =
               pfVar19[6] - *(float *)(&DAT_1008c5508 + lVar14) * fVar67;
          *(float *)(param_1 + 0x61c4 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c550c + lVar14) * fVar68 - pfVar19[7];
          *(float *)(param_1 + 0x61c8 + uVar16 * 0x48) =
               pfVar19[8] - *(float *)(&DAT_1008c5510 + lVar14) * fVar60;
          *(uint *)(param_1 + 0x61cc + uVar16 * 0x48) =
               (uint)(fVar60 * *(float *)(&DAT_1008c5514 + lVar14) + pfVar19[9]) ^ uVar7;
          *(float *)(param_1 + 0x61d0 + uVar16 * 0x48) =
               fVar68 * *(float *)(&DAT_1008c5518 + lVar14) + pfVar19[10];
          *(uint *)(param_1 + 0x61d4 + uVar16 * 0x48) =
               (uint)(fVar67 * *(float *)(&DAT_1008c551c + lVar14) + pfVar19[0xb]) ^ uVar7;
          *(float *)(param_1 + 0x61d8 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c5520 + lVar14) * fVar66 + pfVar19[0xc];
          *(uint *)(param_1 + 0x61dc + uVar16 * 0x48) =
               (uint)(*(float *)(&DAT_1008c5524 + lVar14) * fVar65 + pfVar19[0xd]) ^ uVar7;
          *(float *)(param_1 + 0x61e0 + uVar16 * 0x48) =
               fVar75 * *(float *)(&DAT_1008c5528 + lVar14) + pfVar19[0xe];
          *(uint *)(param_1 + 0x61e4 + uVar16 * 0x48) =
               (uint)(*(float *)(&DAT_1008c552c + lVar14) * fVar73 + pfVar19[0xf]) ^ uVar7;
          *(float *)(param_1 + 0x61e8 + uVar16 * 0x48) =
               *(float *)(&DAT_1008c5530 + lVar14) * fVar71 + pfVar19[0x10];
          fVar86 = (float)((uint)(*(float *)(&DAT_1008c5534 + lVar14) * fVar86 + pfVar19[0x11]) ^
                          uVar7);
        }
        *(float *)(param_1 + 0x61ec + uVar16 * 0x48) = fVar86;
        *pfVar19 = *(float *)(&DAT_1008c5538 + lVar14) * fVar85;
        pfVar19[1] = *(float *)(&DAT_1008c553c + lVar14) * fVar25;
        pfVar19[2] = *(float *)(&DAT_1008c5540 + lVar14) * fVar84;
        pfVar19[3] = *(float *)(&DAT_1008c5544 + lVar14) * fVar83;
        pfVar19[4] = *(float *)(&DAT_1008c5548 + lVar14) * fVar81;
        pfVar19[5] = *(float *)(&DAT_1008c554c + lVar14) * fVar79;
        pfVar19[6] = *(float *)(&DAT_1008c5550 + lVar14) * fVar77;
        pfVar19[7] = *(float *)(&DAT_1008c5554 + lVar14) * fVar82;
        pfVar19[8] = *(float *)(&DAT_1008c5558 + lVar14) * fVar69;
        pfVar19[9] = fVar69 * *(float *)(&DAT_1008c555c + lVar14);
        pfVar19[10] = fVar82 * *(float *)(&DAT_1008c5560 + lVar14);
        pfVar19[0xb] = fVar77 * *(float *)(&DAT_1008c5564 + lVar14);
        pfVar19[0xc] = fVar79 * *(float *)(&DAT_1008c5568 + lVar14);
        pfVar19[0xd] = fVar81 * *(float *)(&DAT_1008c556c + lVar14);
        pfVar19[0xe] = fVar83 * *(float *)(&DAT_1008c5570 + lVar14);
        pfVar19[0xf] = fVar84 * *(float *)(&DAT_1008c5574 + lVar14);
        pfVar19[0x10] = fVar25 * *(float *)(&DAT_1008c5578 + lVar14);
        pfVar19[0x11] = fVar85 * *(float *)(&DAT_1008c557c + lVar14);
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x48;
      } while (param_4 + 1 != (int)uVar16);
    }
  }
  else {
    if (bVar22 && bVar21) {
      uVar12 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar12,0x10);
      if (cVar11 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(frame->reorderedPtr == &frame->dequantized[channel]) || (frame->reorderedPtr == &frame->reordered)"
        ;
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar12 = DAT_10073fa70;
    uVar10 = _UNK_100700b3c;
    uVar9 = _UNK_100700b38;
    uVar8 = _UNK_100700b34;
    uVar7 = _DAT_100700b30;
    if ((int)param_3 <= param_4) {
      uVar23 = 0;
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = 0;
      if ((param_3 & 1) != 0) {
        uVar23 = _DAT_100700b30;
        uVar24 = _UNK_100700b34;
        uVar26 = _UNK_100700b38;
        uVar27 = _UNK_100700b3c;
      }
      lVar13 = (long)param_2 * 0x90;
      lVar14 = (long)(int)param_3;
      lVar15 = lVar14 * 0x48 + 0xc;
      lVar20 = param_1 + 0x4fa8 + lVar20;
      do {
        lVar17 = *(long *)(param_1 + 0x4f98);
        fVar83 = *(float *)(lVar17 + lVar14 * 0x48);
        fVar84 = *(float *)(lVar17 + 4 + lVar14 * 0x48);
        fVar25 = *(float *)(lVar17 + 8 + lVar14 * 0x48);
        fVar30 = DAT_1008be110 * fVar84 + DAT_1008be0c0 * fVar83;
        fVar33 = DAT_1008be114 * fVar84 + DAT_1008be0c4 * fVar83;
        fVar34 = _DAT_1008be118 * fVar84 + _DAT_1008be0c8 * fVar83;
        fVar35 = fRam00000001008be11c * fVar84 + fRam00000001008be0cc * fVar83;
        fVar36 = _DAT_1008be120 * fVar84 + _DAT_1008be0d0 * fVar83;
        fVar38 = fRam00000001008be124 * fVar84 + fRam00000001008be0d4 * fVar83;
        fVar40 = _DAT_1008be128 * fVar84 + _DAT_1008be0d8 * fVar83;
        fVar42 = fRam00000001008be12c * fVar84 + fRam00000001008be0dc * fVar83;
        fVar44 = _DAT_1008be130 * fVar84 + _DAT_1008be0e0 * fVar83;
        fVar46 = fRam00000001008be134 * fVar84 + fRam00000001008be0e4 * fVar83;
        fVar48 = _DAT_1008be138 * fVar84 + _DAT_1008be0e8 * fVar83;
        fVar50 = fRam00000001008be13c * fVar84 + fRam00000001008be0ec * fVar83;
        fVar52 = _DAT_1008be140 * fVar84 + _DAT_1008be0f0 * fVar83;
        fVar54 = fRam00000001008be144 * fVar84 + fRam00000001008be0f4 * fVar83;
        fVar56 = _DAT_1008be148 * fVar84 + _DAT_1008be0f8 * fVar83;
        fVar58 = fRam00000001008be14c * fVar84 + fRam00000001008be0fc * fVar83;
        fVar28 = fVar84 * _DAT_1008be150 + fVar83 * _DAT_1008be100;
        fVar29 = fVar84 * fRam00000001008be154 + fVar83 * fRam00000001008be104;
        lVar17 = lVar17 + lVar15;
        lVar18 = 0;
        pfVar19 = (float *)&DAT_1008be1b0;
        fVar60 = _DAT_1008be1a0;
        fVar61 = fRam00000001008be1a4;
        fVar69 = _DAT_1008be180;
        fVar71 = fRam00000001008be184;
        fVar73 = _DAT_1008be188;
        fVar75 = fRam00000001008be18c;
        fVar83 = DAT_1008be160;
        fVar84 = DAT_1008be164;
        fVar85 = _DAT_1008be168;
        fVar86 = fRam00000001008be16c;
        fVar77 = _DAT_1008be170;
        fVar79 = fRam00000001008be174;
        fVar81 = _DAT_1008be178;
        fVar82 = fRam00000001008be17c;
        fVar65 = _DAT_1008be190;
        fVar66 = fRam00000001008be194;
        fVar67 = _DAT_1008be198;
        fVar68 = fRam00000001008be19c;
        do {
          fVar83 = fVar83 * fVar25;
          fVar84 = fVar84 * fVar25;
          fVar85 = fVar85 * fVar25;
          fVar86 = fVar86 * fVar25;
          fVar77 = fVar77 * fVar25;
          fVar79 = fVar79 * fVar25;
          fVar81 = fVar81 * fVar25;
          fVar82 = fVar82 * fVar25;
          fVar69 = fVar69 * fVar25;
          fVar71 = fVar71 * fVar25;
          fVar73 = fVar73 * fVar25;
          fVar75 = fVar75 * fVar25;
          fVar65 = fVar65 * fVar25;
          fVar66 = fVar66 * fVar25;
          fVar67 = fVar67 * fVar25;
          fVar68 = fVar68 * fVar25;
          fVar60 = fVar60 * fVar25;
          fVar61 = fVar61 * fVar25;
          fVar5 = *(float *)(lVar17 + lVar18 * 4);
          fVar25 = *(float *)(lVar17 + 4 + lVar18 * 4);
          fVar30 = *pfVar19 * fVar5 + fVar83 + fVar30;
          fVar33 = pfVar19[1] * fVar5 + fVar84 + fVar33;
          fVar34 = pfVar19[2] * fVar5 + fVar85 + fVar34;
          fVar35 = pfVar19[3] * fVar5 + fVar86 + fVar35;
          fVar36 = pfVar19[4] * fVar5 + fVar77 + fVar36;
          fVar38 = pfVar19[5] * fVar5 + fVar79 + fVar38;
          fVar40 = pfVar19[6] * fVar5 + fVar81 + fVar40;
          fVar42 = pfVar19[7] * fVar5 + fVar82 + fVar42;
          fVar44 = pfVar19[8] * fVar5 + fVar69 + fVar44;
          fVar46 = pfVar19[9] * fVar5 + fVar71 + fVar46;
          fVar48 = pfVar19[10] * fVar5 + fVar73 + fVar48;
          fVar50 = pfVar19[0xb] * fVar5 + fVar75 + fVar50;
          fVar52 = pfVar19[0xc] * fVar5 + fVar65 + fVar52;
          fVar54 = pfVar19[0xd] * fVar5 + fVar66 + fVar54;
          fVar56 = pfVar19[0xe] * fVar5 + fVar67 + fVar56;
          fVar58 = pfVar19[0xf] * fVar5 + fVar68 + fVar58;
          fVar28 = fVar5 * pfVar19[0x10] + fVar60 + fVar28;
          fVar29 = fVar5 * pfVar19[0x11] + fVar61 + fVar29;
          fVar83 = pfVar19[0x14];
          fVar84 = pfVar19[0x15];
          fVar85 = pfVar19[0x16];
          fVar86 = pfVar19[0x17];
          fVar77 = pfVar19[0x18];
          fVar79 = pfVar19[0x19];
          fVar81 = pfVar19[0x1a];
          fVar82 = pfVar19[0x1b];
          fVar69 = pfVar19[0x1c];
          fVar71 = pfVar19[0x1d];
          fVar73 = pfVar19[0x1e];
          fVar75 = pfVar19[0x1f];
          fVar65 = pfVar19[0x20];
          fVar66 = pfVar19[0x21];
          fVar67 = pfVar19[0x22];
          fVar68 = pfVar19[0x23];
          fVar60 = pfVar19[0x24];
          fVar61 = pfVar19[0x25];
          lVar18 = lVar18 + 2;
          pfVar19 = pfVar19 + 0x28;
        } while ((uint)lVar18 < 0xe);
        fVar5 = *(float *)(lVar17 + lVar18 * 4);
        fVar30 = _DAT_1008be610 * fVar5 + fVar30 + fVar83 * fVar25;
        fVar33 = fRam00000001008be614 * fVar5 + fVar33 + fVar84 * fVar25;
        fVar34 = fRam00000001008be618 * fVar5 + fVar34 + fVar85 * fVar25;
        fVar35 = fRam00000001008be61c * fVar5 + fVar35 + fVar86 * fVar25;
        fVar62 = fRam00000001008be624 * fVar5;
        fVar63 = fRam00000001008be628 * fVar5;
        fVar64 = fRam00000001008be62c * fVar5;
        fVar36 = _DAT_1008be620 * fVar5 + fVar36 + fVar77 * fVar25;
        auVar31._0_4_ = _DAT_1008be630 * fVar5 + fVar44 + fVar69 * fVar25;
        auVar31._4_4_ = fRam00000001008be634 * fVar5 + fVar46 + fVar71 * fVar25;
        auVar31._8_4_ = fRam00000001008be638 * fVar5 + fVar48 + fVar73 * fVar25;
        auVar31._12_4_ = fRam00000001008be63c * fVar5 + fVar50 + fVar75 * fVar25;
        fVar83 = _DAT_1008be640 * fVar5 + fVar52 + fVar65 * fVar25;
        fVar84 = fRam00000001008be644 * fVar5 + fVar54 + fVar66 * fVar25;
        fVar85 = fRam00000001008be648 * fVar5 + fVar56 + fVar67 * fVar25;
        fVar86 = fRam00000001008be64c * fVar5 + fVar58 + fVar68 * fVar25;
        fVar77 = fVar5 * _DAT_1008be650 + fVar28 + fVar60 * fVar25;
        fVar69 = fVar5 * fRam00000001008be654 + fVar29 + fVar61 * fVar25;
        pfVar19 = (float *)(lVar20 + lVar14 * 0x48);
        pfVar1 = (float *)(lVar20 + 0x10 + lVar14 * 0x48);
        pfVar2 = (float *)(lVar20 + 0x28 + lVar14 * 0x48);
        pfVar3 = (float *)(lVar20 + 0x38 + lVar14 * 0x48);
        uVar6 = *(undefined8 *)(lVar20 + 0x20 + lVar14 * 0x48);
        uVar53 = (uint)(*pfVar19 - auVar31._4_4_ * *(float *)(&DAT_1008c54f0 + lVar13)) ^ uVar23;
        uVar55 = (uint)(pfVar19[1] - auVar31._8_4_ * *(float *)(&DAT_1008c54f4 + lVar13)) ^ uVar24;
        uVar57 = (uint)(pfVar19[2] - auVar31._12_4_ * *(float *)(&DAT_1008c54f8 + lVar13)) ^ uVar26;
        uVar59 = (uint)(pfVar19[3] - fVar83 * *(float *)(&DAT_1008c54fc + lVar13)) ^ uVar27;
        uVar70 = (uint)(*pfVar1 - fVar84 * *(float *)(&DAT_1008c5500 + lVar13)) ^ uVar23;
        uVar72 = (uint)(pfVar1[1] - fVar85 * *(float *)(&DAT_1008c5504 + lVar13)) ^ uVar24;
        uVar74 = (uint)(pfVar1[2] - fVar86 * *(float *)(&DAT_1008c5508 + lVar13)) ^ uVar26;
        uVar76 = (uint)(pfVar1[3] - fVar77 * *(float *)(&DAT_1008c550c + lVar13)) ^ uVar27;
        uVar78 = (uint)((float)uVar6 -
                       (float)((uint)fVar69 ^ (uint)uVar12) *
                       (float)*(undefined8 *)(&DAT_1008c5510 + lVar13)) ^ uVar23;
        uVar80 = (uint)((float)((ulong)uVar6 >> 0x20) -
                       (float)((uint)fVar69 ^ (uint)((ulong)uVar12 >> 0x20)) *
                       (float)((ulong)*(undefined8 *)(&DAT_1008c5510 + lVar13) >> 0x20)) ^ uVar24;
        uVar37 = (uint)(fVar77 * *(float *)(&DAT_1008c5518 + lVar13) + *pfVar2) ^ uVar23;
        uVar39 = (uint)(fVar86 * *(float *)(&DAT_1008c551c + lVar13) + pfVar2[1]) ^ uVar24;
        uVar41 = (uint)(fVar85 * *(float *)(&DAT_1008c5520 + lVar13) + pfVar2[2]) ^ uVar26;
        uVar43 = (uint)(fVar84 * *(float *)(&DAT_1008c5524 + lVar13) + pfVar2[3]) ^ uVar27;
        uVar45 = (uint)(fVar83 * *(float *)(&DAT_1008c5528 + lVar13) + *pfVar3) ^ uVar23;
        uVar47 = (uint)(auVar31._12_4_ * *(float *)(&DAT_1008c552c + lVar13) + pfVar3[1]) ^ uVar24;
        uVar49 = (uint)(auVar31._8_4_ * *(float *)(&DAT_1008c5530 + lVar13) + pfVar3[2]) ^ uVar26;
        uVar51 = (uint)(auVar31._4_4_ * *(float *)(&DAT_1008c5534 + lVar13) + pfVar3[3]) ^ uVar27;
        uVar23 = uVar23 ^ uVar7;
        uVar24 = uVar24 ^ uVar8;
        uVar26 = uVar26 ^ uVar9;
        uVar27 = uVar27 ^ uVar10;
        puVar4 = (uint *)(param_1 + 25000 + lVar14 * 0x48);
        *puVar4 = uVar53;
        puVar4[1] = uVar55;
        puVar4[2] = uVar57;
        puVar4[3] = uVar59;
        puVar4 = (uint *)(param_1 + 0x61b8 + lVar14 * 0x48);
        *puVar4 = uVar70;
        puVar4[1] = uVar72;
        puVar4[2] = uVar74;
        puVar4[3] = uVar76;
        *(ulong *)(param_1 + 0x61c8 + lVar14 * 0x48) = CONCAT44(uVar80,uVar78);
        puVar4 = (uint *)(param_1 + 0x61d0 + lVar14 * 0x48);
        *puVar4 = uVar37;
        puVar4[1] = uVar39;
        puVar4[2] = uVar41;
        puVar4[3] = uVar43;
        puVar4 = (uint *)(param_1 + 0x61e0 + lVar14 * 0x48);
        *puVar4 = uVar45;
        puVar4[1] = uVar47;
        puVar4[2] = uVar49;
        puVar4[3] = uVar51;
        auVar32._4_4_ = fVar62 + fVar38 + fVar79 * fVar25;
        auVar32._0_4_ = fVar36;
        auVar32._8_4_ = fVar63 + fVar40 + fVar81 * fVar25;
        auVar32._12_4_ = fVar64 + fVar42 + fVar82 * fVar25;
        auVar32 = blendps(auVar31,auVar32,0xe);
        fVar83 = *(float *)(&DAT_1008c5560 + lVar13);
        fVar84 = *(float *)(&DAT_1008c5564 + lVar13);
        fVar25 = *(float *)(&DAT_1008c5568 + lVar13);
        fVar85 = *(float *)(&DAT_1008c556c + lVar13);
        fVar86 = *(float *)(&DAT_1008c5570 + lVar13);
        fVar77 = *(float *)(&DAT_1008c5574 + lVar13);
        fVar79 = *(float *)(&DAT_1008c5578 + lVar13);
        fVar81 = *(float *)(&DAT_1008c557c + lVar13);
        fVar82 = *(float *)(&DAT_1008c5538 + lVar13);
        fVar69 = *(float *)(&DAT_1008c553c + lVar13);
        fVar71 = *(float *)(&DAT_1008c5540 + lVar13);
        fVar73 = *(float *)(&DAT_1008c5544 + lVar13);
        fVar75 = *(float *)(&DAT_1008c5548 + lVar13);
        fVar65 = *(float *)(&DAT_1008c554c + lVar13);
        fVar66 = *(float *)(&DAT_1008c5550 + lVar13);
        fVar67 = *(float *)(&DAT_1008c5554 + lVar13);
        *(ulong *)(lVar20 + 0x20 + lVar14 * 0x48) =
             CONCAT44((float)((ulong)*(undefined8 *)(&DAT_1008c5558 + lVar13) >> 0x20) * fVar30,
                      (float)*(undefined8 *)(&DAT_1008c5558 + lVar13) * fVar30);
        pfVar19 = (float *)(lVar20 + 0x28 + lVar14 * 0x48);
        *pfVar19 = fVar33 * fVar83;
        pfVar19[1] = fVar34 * fVar84;
        pfVar19[2] = fVar35 * fVar25;
        pfVar19[3] = fVar36 * fVar85;
        pfVar19 = (float *)(lVar20 + 0x38 + lVar14 * 0x48);
        *pfVar19 = auVar32._4_4_ * fVar86;
        pfVar19[1] = auVar32._8_4_ * fVar77;
        pfVar19[2] = auVar32._12_4_ * fVar79;
        pfVar19[3] = auVar32._0_4_ * fVar81;
        pfVar19 = (float *)(lVar20 + lVar14 * 0x48);
        *pfVar19 = auVar32._0_4_ * fVar82;
        pfVar19[1] = auVar32._12_4_ * fVar69;
        pfVar19[2] = auVar32._8_4_ * fVar71;
        pfVar19[3] = auVar32._4_4_ * fVar73;
        pfVar19 = (float *)(lVar20 + 0x10 + lVar14 * 0x48);
        *pfVar19 = fVar36 * fVar75;
        pfVar19[1] = fVar35 * fVar65;
        pfVar19[2] = fVar34 * fVar66;
        pfVar19[3] = fVar33 * fVar67;
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 0x48;
      } while (param_4 + 1 != (int)lVar14);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

