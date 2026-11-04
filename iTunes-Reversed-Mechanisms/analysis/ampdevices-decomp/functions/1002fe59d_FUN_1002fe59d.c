// name: FUN_1002fe59d
// address: 1002fe59d

undefined8 FUN_1002fe59d(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long local_458 [64];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined2 local_24c;
  char *local_24a;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar2 = *(long *)(param_1 + 8), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x10) == 0)) {
    uVar12 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar12,0x10);
    if (cVar8 != '\0') {
      local_24a = "TrackInstanceIsValid(sourceTrackInstance)";
LAB_1002fe72a:
      uStack_250 = 1;
      uStack_254 = 0x7a0a90;
      local_24c = 0x822;
      local_258 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
  }
  else {
    if (((param_2 != 0) && (lVar3 = *(long *)(param_2 + 8), lVar3 != 0)) &&
       (lVar13 = *(long *)(lVar3 + 0x10), lVar13 != 0)) {
      if (*(int *)(lVar13 + 0x80) != 0x74646174) {
        uVar12 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar12,0x10);
        if (cVar8 != '\0') {
          local_258 = 0x8220202;
          uStack_254 = 0x7ab58c;
          uStack_250 = 1;
          local_24c = 0x822;
          local_24a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
        }
        cVar8 = FUN_1001782e9(0,1);
        if (cVar8 == '\0') {
          uVar12 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar12,0x10);
          if (cVar8 != '\0') {
            local_24a = "TrackDataIsValid(destTrackData)";
            goto LAB_1002fe72a;
          }
          goto LAB_1002fe68d;
        }
      }
      FUN_1001c62d9(local_58,0x20);
      if ((*(byte *)(param_2 + 0x4a) & 1) == 0) {
        cVar8 = '\0';
      }
      else {
        cVar8 = FUN_1002fcc1f(param_1,param_2,local_58);
      }
      if (*(int *)(*(long *)(lVar3 + 0x80) + 0xc) != *(int *)(*(long *)(lVar2 + 0x80) + 0xc)) {
        FUN_100473a90(lVar3);
        lVar16 = *(long *)(lVar2 + 0x80);
        lVar4 = *(long *)(lVar3 + 0x80);
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(lVar16 + 0xc);
        *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar16 + 0x14);
        FUN_1005389ba(local_58,0x5d);
      }
      if (*(char *)(lVar3 + 300) != *(char *)(lVar2 + 300)) {
        FUN_100320aca(lVar3,(int)*(char *)(lVar2 + 300),0);
        FUN_1005389ba(local_58,0x19);
      }
      if (*(char *)(lVar3 + 0x134) != *(char *)(lVar2 + 0x134)) {
        *(char *)(lVar3 + 0x134) = *(char *)(lVar2 + 0x134);
        FUN_1005389ba(local_58,0x9a);
      }
      if (*(int *)(lVar3 + 0x130) != *(int *)(lVar2 + 0x130)) {
        *(int *)(lVar3 + 0x130) = *(int *)(lVar2 + 0x130);
        FUN_1005389ba(local_58,0xb7);
      }
      if (*(int *)(lVar3 + 0x144) != *(int *)(lVar2 + 0x144)) {
        *(int *)(lVar3 + 0x144) = *(int *)(lVar2 + 0x144);
        FUN_1005389ba(local_58,0x16);
      }
      if (*(int *)(lVar3 + 0x19c) != *(int *)(lVar2 + 0x19c)) {
        *(int *)(lVar3 + 0x19c) = *(int *)(lVar2 + 0x19c);
        cVar8 = '\x01';
      }
      if ((*(int *)(lVar13 + 0x84) == 0x646f5069) && ((*(byte *)(lVar13 + 0x2d1a) & 0x20) != 0)) {
        if ((*(byte *)(lVar13 + 0x2d1a) & 0x40) == 0) {
          lVar13 = *(long *)(lVar2 + 400);
          iVar11 = *(int *)(lVar2 + 0x198);
        }
        else {
          lVar13 = 0;
          iVar11 = 0;
        }
        if ((*(long *)(lVar3 + 400) != lVar13) || (*(int *)(lVar3 + 0x198) != iVar11)) {
          *(long *)(lVar3 + 400) = lVar13;
          *(int *)(lVar3 + 0x198) = iVar11;
          FUN_1005389ba(local_58,0x6f);
        }
      }
      if (*(int *)(lVar3 + 0x14c) != *(int *)(lVar2 + 0x14c)) {
        *(int *)(lVar3 + 0x14c) = *(int *)(lVar2 + 0x14c);
        FUN_1005389ba(local_58,0x17);
      }
      if (*(int *)(lVar3 + 0x150) != *(int *)(lVar2 + 0x150)) {
        *(int *)(lVar3 + 0x150) = *(int *)(lVar2 + 0x150);
        FUN_1005389ba(local_58,0x44);
      }
      if (*(int *)(lVar3 + 0x158) != *(int *)(lVar2 + 0x158)) {
        *(int *)(lVar3 + 0x158) = *(int *)(lVar2 + 0x158);
        FUN_1005389ba(local_58,0x45);
      }
      lVar13 = *(long *)(lVar3 + 0x80);
      lVar16 = *(long *)(lVar2 + 0x80);
      if (*(int *)(lVar13 + 4) != *(int *)(lVar16 + 4)) {
        FUN_100473a90(lVar3);
        *(undefined4 *)(*(long *)(lVar3 + 0x80) + 4) = *(undefined4 *)(*(long *)(lVar2 + 0x80) + 4);
        FUN_1005389ba(local_58,0x32);
        lVar13 = *(long *)(lVar3 + 0x80);
        lVar16 = *(long *)(lVar2 + 0x80);
      }
      if (*(int *)(lVar13 + 8) != *(int *)(lVar16 + 8)) {
        FUN_100473a90(lVar3);
        *(undefined4 *)(*(long *)(lVar3 + 0x80) + 8) = *(undefined4 *)(*(long *)(lVar2 + 0x80) + 8);
        FUN_1005389ba(local_58,0x33);
      }
      if (*(short *)(param_2 + 0x5a) != *(short *)(param_1 + 0x5a)) {
        *(short *)(param_2 + 0x5a) = *(short *)(param_1 + 0x5a);
        FUN_1005389ba(local_58,0x14);
      }
      if ((*(byte *)(param_2 + 0x4a) & 1) == 0) {
        if (*(int *)(param_2 + 0xe4) == *(int *)(param_1 + 0xe4)) {
          iVar1 = *(int *)(param_2 + 0xe8);
          iVar11 = *(int *)(param_1 + 0xe8);
          if ((((iVar1 == *(int *)(param_1 + 0xe8)) &&
               (iVar11 = iVar1, *(long *)(param_2 + 0xd0) == *(long *)(param_1 + 0xd0))) &&
              (*(long *)(param_2 + 0xd8) == *(long *)(param_1 + 0xd8))) &&
             (*(int *)(param_2 + 0xe0) == *(int *)(param_1 + 0xe0))) goto LAB_1002feabc;
        }
        else {
          iVar11 = *(int *)(param_1 + 0xe8);
        }
        *(int *)(param_2 + 0xe4) = *(int *)(param_1 + 0xe4);
        *(int *)(param_2 + 0xe8) = iVar11;
        uVar5 = *(undefined4 *)(param_1 + 0xd4);
        uVar6 = *(undefined4 *)(param_1 + 0xd8);
        uVar7 = *(undefined4 *)(param_1 + 0xdc);
        *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
        *(undefined4 *)(param_2 + 0xd4) = uVar5;
        *(undefined4 *)(param_2 + 0xd8) = uVar6;
        *(undefined4 *)(param_2 + 0xdc) = uVar7;
        *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
        FUN_1005389ba(local_58,0x6e);
      }
LAB_1002feabc:
      uVar14 = *(uint *)(lVar2 + 0xc2) >> 2 & 1;
      if ((*(uint *)(lVar3 + 0xc2) >> 2 & 1) != uVar14) {
        *(uint *)(lVar3 + 0xc2) = (*(uint *)(lVar3 + 0xc2) & 0xfffffffb) + uVar14 * 4;
        FUN_1005389ba(local_58,0x7d);
      }
      uVar14 = *(uint *)(lVar2 + 0xd4);
      if (uVar14 != 0 && (*(uint *)(lVar3 + 0xd4) & 0xffffdfff) != uVar14) {
        *(uint *)(lVar3 + 0xd4) = uVar14;
        FUN_1005389ba(local_58,0x3c);
      }
      if (*(int *)(*(long *)(lVar3 + 0x70) + 0xc) != *(int *)(*(long *)(lVar2 + 0x70) + 0xc)) {
        FUN_100471a46(lVar3);
        *(undefined4 *)(*(long *)(lVar3 + 0x70) + 0xc) =
             *(undefined4 *)(*(long *)(lVar2 + 0x70) + 0xc);
        FUN_1005389ba(local_58,0x3c);
      }
      uVar14 = *(uint *)(lVar3 + 0xc2);
      uVar17 = *(uint *)(lVar2 + 0xc2);
      uVar15 = uVar17 >> 0xf & 1;
      if ((uVar14 >> 0xf & 1) != uVar15) {
        *(uint *)(lVar3 + 0xc2) = uVar14 & 0xffff7fff | uVar15 << 0xf;
        FUN_1005389ba(local_58,0x70);
        uVar14 = *(uint *)(lVar3 + 0xc2);
        uVar17 = *(uint *)(lVar2 + 0xc2);
      }
      uVar15 = uVar17 >> 0x10 & 1;
      if ((uVar14 >> 0x10 & 1) != uVar15) {
        *(uint *)(lVar3 + 0xc2) = uVar14 & 0xfffeffff | uVar15 << 0x10;
        FUN_1005389ba(local_58,0x5e);
        uVar14 = *(uint *)(lVar3 + 0xc2);
        uVar17 = *(uint *)(lVar2 + 0xc2);
      }
      if (((uVar14 ^ uVar17) >> 0x1d & 1) != 0) {
        FUN_10047f8d8(lVar3,uVar17 >> 0x1d & 1,local_58);
      }
      lVar13 = *(long *)(lVar2 + 0x70);
      if ((*(int *)(lVar13 + 0x20) != 0) || (*(int *)(*(long *)(lVar3 + 0x70) + 0x20) != 0)) {
        iVar11 = FUN_10047c1d6(lVar2,&local_258);
        if ((iVar11 == 0) &&
           ((iVar11 = FUN_10047c1d6(lVar3,local_458), iVar11 == 0 &&
            (cVar9 = FUN_1001e3edc(&local_258,local_458,0), cVar9 == '\0')))) {
          FUN_100471d24(lVar3,&local_258);
          FUN_1005389ba(local_58,0x36);
        }
        lVar13 = *(long *)(lVar2 + 0x70);
      }
      if ((*(int *)(lVar13 + 0x24) != 0) || (*(int *)(*(long *)(lVar3 + 0x70) + 0x24) != 0)) {
        local_258 = 0;
        uStack_254 = 0;
        local_458[0] = 0;
        iVar11 = FUN_10047c4cc(lVar2);
        if ((iVar11 == 0) && (iVar11 = FUN_10047c4cc(lVar3,local_458), iVar11 == 0)) {
          lVar13 = CONCAT44(uStack_254,local_258);
          if (lVar13 == 0 || local_458[0] == 0) {
            if (local_458[0] != 0 || lVar13 != 0) goto LAB_1002fecf6;
          }
          else {
            cVar9 = FUN_1001e46a4(lVar13,local_458[0],0);
            if (cVar9 == '\0') {
              lVar13 = CONCAT44(uStack_254,local_258);
LAB_1002fecf6:
              FUN_10047c6e3(lVar3,lVar13);
              FUN_1005389ba(local_58,0x56);
            }
          }
        }
        FUN_1001c64c1(CONCAT44(uStack_254,local_258));
        FUN_1001c64c1(local_458[0]);
        lVar13 = *(long *)(lVar2 + 0x70);
      }
      if ((*(int *)(lVar13 + 0x28) != 0) || (*(int *)(*(long *)(lVar3 + 0x70) + 0x28) != 0)) {
        local_258 = 0;
        uStack_254 = 0;
        local_458[0] = 0;
        iVar11 = FUN_10047c9a2(lVar2);
        if ((iVar11 == 0) && (iVar11 = FUN_10047c9a2(lVar3,local_458), iVar11 == 0)) {
          lVar13 = CONCAT44(uStack_254,local_258);
          if (local_458[0] == 0 || lVar13 == 0) {
            if (local_458[0] != 0 || lVar13 != 0) goto LAB_1002fedae;
          }
          else {
            cVar9 = FUN_1001e46a4(lVar13,local_458[0],0);
            if (cVar9 == '\0') {
              lVar13 = CONCAT44(uStack_254,local_258);
LAB_1002fedae:
              FUN_10047cbb9(lVar3,lVar13);
              FUN_1005389ba(local_58,0x7f);
            }
          }
        }
        FUN_1001c64c1(CONCAT44(uStack_254,local_258));
        FUN_1001c64c1(local_458[0]);
      }
      if ((((*(int *)(lVar2 + 0xfc) != 0) || (*(int *)(lVar3 + 0xfc) != 0)) &&
          (iVar11 = FUN_10047b65a(lVar2,&local_258), iVar11 == 0)) &&
         ((iVar11 = FUN_10047b65a(lVar3,local_458), iVar11 == 0 &&
          (cVar9 = FUN_1001e3edc(&local_258,local_458,0), cVar9 == '\0')))) {
        FUN_1004717a2(lVar3,&local_258);
        FUN_1005389ba(local_58,0xe);
      }
      bVar10 = **(byte **)(param_1 + 0x18) ^ **(byte **)(param_2 + 0x18);
      if ((bVar10 & 2) != 0) {
        FUN_1002af503(param_2);
        **(byte **)(param_2 + 0x18) =
             **(byte **)(param_2 + 0x18) & 0xfd | **(byte **)(param_1 + 0x18) & 2;
        FUN_1005389ba(local_58,0x60);
        bVar10 = **(byte **)(param_1 + 0x18) ^ **(byte **)(param_2 + 0x18);
      }
      if ((bVar10 & 4) != 0) {
        FUN_1002af503(param_2);
        **(byte **)(param_2 + 0x18) =
             **(byte **)(param_2 + 0x18) & 0xfb | **(byte **)(param_1 + 0x18) & 4;
        FUN_1005389ba(local_58,0x61);
      }
      cVar9 = FUN_100539270(local_58);
      if (cVar9 == '\0') {
        if (cVar8 == '\0') {
          uVar12 = 0;
          goto LAB_1002fe698;
        }
      }
      else {
        FUN_1002fe16c(lVar3,local_58,0);
        FUN_1004755ef(lVar3,0,local_58);
      }
      FUN_1002fef76(lVar3);
      uVar12 = 1;
      goto LAB_1002fe698;
    }
    uVar12 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar12,0x10);
    if (cVar8 != '\0') {
      local_24a = "TrackInstanceIsValid(destTrackInstance)";
      goto LAB_1002fe72a;
    }
  }
LAB_1002fe68d:
  uVar12 = 0;
  FUN_1001782e9(0,0);
LAB_1002fe698:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

