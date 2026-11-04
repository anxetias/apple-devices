// name: FUN_1003ab3b4
// address: 1003ab3b4

undefined8 FUN_1003ab3b4(byte *param_1,ulong *param_2,uint *param_3,uint *param_4,int param_5)

{
  short *psVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  undefined4 uVar14;
  char local_3e2 [2];
  ushort *local_3e0;
  uint *local_3d8;
  ulong *local_3d0;
  int local_3c8;
  int local_3c4;
  undefined8 local_3c0;
  undefined4 local_3b8;
  char *local_3b4;
  undefined2 local_3ac;
  undefined4 local_3aa;
  undefined4 local_398;
  undefined5 uStack_394;
  undefined1 uStack_38f;
  undefined2 uStack_38e;
  undefined2 local_38c;
  char *local_38a;
  ushort local_358;
  undefined1 local_356 [510];
  undefined1 local_158 [32];
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar9 = (ushort *)CONCAT71((int7)((ulong)param_3 >> 8),*(byte *)((long)param_4 + 0xb));
  local_3d0 = param_2;
  if (*(byte *)((long)param_4 + 0xb) != 1 && param_5 != 0) {
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 != '\0') {
      local_398 = 0x8220202;
      uStack_394 = 0x1007a0a90;
      uStack_38f = 0;
      uStack_38e = 0;
      local_38c = 0x822;
      local_38a = "validateV1Tags == false || id3Data->header.versionHigh == 1";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_398,0x16);
    }
    FUN_1001782e9(0,0);
    local_3c0 = 0xffffffce;
    goto LAB_1003aca52;
  }
  local_3c4 = (int)puVar9 + -3;
  local_3e0 = puVar9;
  if ((*param_1 & 1) == 0) {
LAB_1003ab4de:
    if ((*param_1 & 4) != 0) {
      uVar14 = 0x54503120;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54504531;
      }
      FUN_10042ae01(param_4,0x54504531);
      FUN_10042ae01(param_4,0x54503120);
      uVar3 = *(ushort *)(param_1 + 0x408);
      if (uVar3 != 0) {
        if ((char)param_5 != '\0') {
          local_3c0 = 0xffffff32;
          if (0x1e < uVar3) goto LAB_1003aca52;
          local_3d8 = param_4;
          local_3c8 = param_5;
          cVar2 = FUN_1001e54d7(param_1 + 0x408);
          if (cVar2 == '\0') goto LAB_1003aca52;
          uVar3 = *(ushort *)(param_1 + 0x408);
          param_4 = local_3d8;
          param_5 = local_3c8;
        }
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar14,param_1 + 0x40a,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    cVar2 = (char)param_5;
    if ((param_1[3] & 0x40) != 0) {
      uVar14 = 0x54503220;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54504532;
      }
      FUN_10042ae01(param_4,0x54504532);
      FUN_10042ae01(param_4,0x54503220);
      uVar3 = *(ushort *)(param_1 + 0x1458);
      if (uVar3 != 0) {
        local_3c0 = 0xffffff32;
        local_3d8 = param_3;
        if (cVar2 != '\0') goto LAB_1003aca52;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar14,param_1 + 0x145a,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        param_3 = local_3d8;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[2] & 0x20) != 0) {
      uVar14 = 0x54434d20;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54434f4d;
      }
      FUN_10042ae01(param_4,0x54434f4d);
      FUN_10042ae01(param_4,0x54434d20);
      uVar3 = *(ushort *)(param_1 + 0x1040);
      if (uVar3 != 0) {
        local_3c0 = 0xffffff32;
        local_3d8 = param_3;
        if (cVar2 != '\0') goto LAB_1003aca52;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar14,param_1 + 0x1042,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        param_3 = local_3d8;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((*param_1 & 8) != 0) {
      uVar14 = 0x54414c20;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54414c42;
      }
      FUN_10042ae01(param_4,0x54414c42);
      FUN_10042ae01(param_4,0x54414c20);
      uVar3 = *(ushort *)(param_1 + 0x608);
      if (uVar3 != 0) {
        if (cVar2 != '\0') {
          local_3c0 = 0xffffff32;
          if (0x1e < uVar3) goto LAB_1003aca52;
          local_3d8 = param_4;
          local_3c8 = param_5;
          cVar2 = FUN_1001e54d7(param_1 + 0x608);
          if (cVar2 == '\0') goto LAB_1003aca52;
          uVar3 = *(ushort *)(param_1 + 0x608);
          param_4 = local_3d8;
          param_5 = local_3c8;
        }
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar14,param_1 + 0x60a,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    local_3c8 = param_5;
    if ((param_1[3] & 0x10) != 0) {
      uVar14 = 0x47503120;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x47525031;
      }
      FUN_10042ae01(param_4,0x47525031);
      FUN_10042ae01(param_4,0x47503120);
      uVar3 = *(ushort *)(param_1 + 0x1254);
      if (uVar3 != 0) {
        local_3c0 = 0xffffff32;
        if ((char)local_3c8 != '\0') goto LAB_1003aca52;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar14,param_1 + 0x1256,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    puVar13 = local_3d0;
    if (local_3d0 != (ulong *)0x0) {
      if ((*(byte *)((long)local_3d0 + 9) & 8) != 0) {
        uVar14 = 0x54543120;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54495431;
        }
        FUN_10042ae01(param_4,0x54495431);
        FUN_10042ae01(param_4,0x54543120);
        uVar3 = *(ushort *)((long)puVar13 + 0x2e24);
        if (uVar3 != 0) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x2e26,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          puVar13 = local_3d0;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
      if ((*(byte *)((long)puVar13 + 9) & 0x10) != 0) {
        uVar14 = 0x4d564e20;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x4d564e4d;
        }
        FUN_10042ae01(param_4,0x4d564e4d);
        FUN_10042ae01(param_4,0x4d564e20);
        uVar3 = *(ushort *)((long)puVar13 + 0x3024);
        if (uVar3 != 0) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x3026,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          puVar13 = local_3d0;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
      if ((*(byte *)((long)puVar13 + 9) & 0x20) != 0) {
        uVar14 = 0x4d564920;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x4d56494e;
        }
        FUN_10042ae01(param_4,0x4d56494e);
        FUN_10042ae01(param_4,0x4d564920);
        if (*(short *)((long)puVar13 + 0x3224) != 0) {
          if (((char)local_3c8 != '\0') &&
             ((local_3c0 = 0xffffff32, (byte)param_4[3] != 1 ||
              (*(short *)((long)local_3d0 + 0x3226) != 0)))) goto LAB_1003aca52;
          FUN_1001e55fb(*(short *)((long)puVar13 + 0x3224),local_138,0x100);
          if (*(ushort *)((long)local_3d0 + 0x3224) <= *(ushort *)((long)local_3d0 + 0x3226)) {
            FUN_1001df1e7("/",local_138,0x100);
            FUN_1001e55fb(*(undefined2 *)((long)local_3d0 + 0x3226),local_158,0x20);
            FUN_1001df1e7(local_158,local_138,0x100);
          }
          uVar5 = FUN_1001df897(local_138);
          local_3c0 = FUN_10042be5d(param_4,uVar14,local_138,uVar5);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
    }
    if ((*param_1 & 0x40) != 0) {
      uVar14 = 0x54524b20;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x5452434b;
      }
      FUN_10042ae01(param_4,0x5452434b);
      FUN_10042ae01(param_4,0x54524b20);
      if (*(int *)(param_1 + 0x1008) != 0) {
        if (((char)local_3c8 != '\0') &&
           ((local_3c0 = 0xffffff32, (byte)param_4[3] != 1 || (*(int *)(param_1 + 0x100c) != 0))))
        goto LAB_1003aca52;
        FUN_1001e55fb(*(int *)(param_1 + 0x1008),local_138,0x100);
        if (*(uint *)(param_1 + 0x1008) <= *(uint *)(param_1 + 0x100c)) {
          FUN_1001df1e7("/",local_138,0x100);
          FUN_1001e55fb(*(undefined4 *)(param_1 + 0x100c),local_158,0x20);
          FUN_1001df1e7(local_158,local_138,0x100);
        }
        uVar5 = FUN_1001df897(local_138);
        local_3c0 = FUN_10042be5d(param_4,uVar14,local_138,uVar5);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[2] & 0x80) != 0) {
      uVar14 = 0x54504120;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54504f53;
      }
      FUN_10042ae01(param_4,0x54504f53);
      FUN_10042ae01(param_4,0x54504120);
      if (*(short *)(param_1 + 0x1244) != 0) {
        local_3c0 = 0xffffff32;
        if ((char)local_3c8 != '\0') goto LAB_1003aca52;
        FUN_1001e55fb(*(short *)(param_1 + 0x1244),local_138,0x100);
        if (*(ushort *)(param_1 + 0x1244) <= *(ushort *)(param_1 + 0x1246)) {
          FUN_1001df1e7("/",local_138,0x100);
          FUN_1001e55fb(*(undefined2 *)(param_1 + 0x1246),local_158,0x20);
          FUN_1001df1e7(local_158,local_138,0x100);
        }
        uVar5 = FUN_1001df897(local_138);
        local_3c0 = FUN_10042be5d(param_4,uVar14,local_138,uVar5);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[1] & 1) != 0) {
      uVar14 = 0x52564120;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x52564144;
      }
      if ((char)local_3e0 == '\x04') {
        uVar14 = 0x52564132;
      }
      FUN_10042ae01(param_4,0x52564132);
      FUN_10042ae01(param_4,0x52564144);
      FUN_10042ae01(param_4,0x52564120);
      if (*(short *)(param_1 + 0x1012) != 0) {
        local_3c0 = 0xffffff32;
        if ((char)local_3c8 != '\0') goto LAB_1003aca52;
        local_3c0 = FUN_10042c246(param_4,uVar14,(int)*(short *)(param_1 + 0x1012),0);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((*param_1 & 0x80) != 0) {
      uVar14 = 0x54594520;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54594552;
      }
      if ((char)local_3e0 == '\x04') {
        uVar14 = 0x54445243;
      }
      FUN_10042ae01(param_4,0x54445243);
      FUN_10042ae01(param_4,0x54594552);
      FUN_10042ae01(param_4,0x54594520);
      if (*(short *)(param_1 + 0x1010) != 0) {
        FUN_1001e55fb(*(short *)(param_1 + 0x1010),local_138,0x100);
        sVar7 = _strlen(local_138);
        if (sVar7 == 4) {
          uVar5 = FUN_1001df897(local_138);
          local_3c0 = FUN_10042be5d(param_4,uVar14,local_138,uVar5);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
    }
    if ((local_3d0 != (ulong *)0x0) && ((*local_3d0 & 0x20000) != 0)) {
      FUN_10042ae01(param_4,0x54445220);
      FUN_10042ae01(param_4,0x5444524c);
      uVar3 = (ushort)local_3d0[0x159];
      if (uVar3 != 0) {
        uVar10 = 0x54445220;
        if ((byte)local_3c4 < 2) {
          uVar10 = 0x5444524c;
        }
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar10,(long)local_3d0 + 0xaca,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[3] & 8) != 0) {
      FUN_10042ae01(param_4,0x5442504d);
      FUN_10042ae01(param_4,0x54425020);
      if (*(short *)(param_1 + 0x1250) != 0) {
        uVar14 = 0x54425020;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x5442504d;
        }
        FUN_1001e55fb(*(short *)(param_1 + 0x1250),local_138,0x100);
        uVar5 = FUN_1001df897(local_138);
        local_3c0 = FUN_10042be5d(param_4,uVar14,local_138,uVar5);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((*param_1 & 0x10) != 0) {
      uVar14 = 0x54434f20;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54434f4e;
      }
      FUN_10042ae01(param_4,0x54434f4e);
      FUN_10042ae01(param_4,0x54434f20);
      FUN_1001e1c39(param_1 + 0x808,&local_358);
      if (local_358 != 0) {
        sVar4 = FUN_1003ad4b1(&local_358);
        if (sVar4 == 0) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
        }
        else {
          pcVar11 = "(%1)";
          if (*(byte *)((long)param_4 + 0xb) == 4) {
            pcVar11 = "%1";
          }
          FUN_1001e04f5(pcVar11,&local_398);
          FUN_1001e5722(&local_358,&local_398,(long)sVar4 + -1);
        }
        uVar3 = 0xff;
        if (local_358 < 0xff) {
          uVar3 = local_358;
        }
        local_3c0 = FUN_10042bf9c(param_4,uVar14,local_356,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[1] & 4) != 0) {
      uVar14 = 0x434f4d20;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x434f4d4d;
      }
      FUN_10042ae71(param_4,0x434f4d4d,0);
      FUN_10042ae71(param_4,0x434f4d20,0);
      FUN_10042ae01(param_4,0x434d3120);
      uVar3 = *(ushort *)(param_1 + 0xe08);
      if (uVar3 != 0) {
        if ((char)local_3c8 != '\0') {
          local_3c0 = 0xffffff32;
          if ((ushort)((ushort)((byte)param_4[3] != 1) * 2 + 0x1c) < uVar3) goto LAB_1003aca52;
          local_3e0 = (ushort *)(param_1 + 0xe08);
          cVar2 = FUN_1001e54d7();
          if (cVar2 == '\0') goto LAB_1003aca52;
          uVar3 = *local_3e0;
        }
        local_3c0 = FUN_10042bc13(param_4,uVar14,0,0,param_1 + 0xe0a,uVar3);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[2] & 0x40) != 0) {
      FUN_10042ae01(param_4,0x54434d50);
      FUN_10042ae01(param_4,0x54435020);
      if (param_1[0x1240] != 0) {
        uVar14 = 0x54435020;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54434d50;
        }
        FUN_1001dfbb3("1",local_138,0x100);
        uVar5 = FUN_1001df897(local_138);
        local_3c0 = FUN_10042be5d(param_4,uVar14,local_138,uVar5);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if ((param_1[3] & 0x20) != 0) {
      uStack_394 = 0x504147506e;
      uStack_38f = 0;
      local_398 = 0x75546908;
      uVar14 = 0x434f4d20;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x434f4d4d;
      }
      FUN_10042ae71(param_4,0x434f4d4d);
      FUN_10042ae71(param_4,0x434f4d20,&local_398);
      _sprintf(local_3e2,"%1.1u",(ulong)(param_1[0x1241] != 0));
      local_3c0 = FUN_10042b0c7(param_4,uVar14,(long)&local_398 + 1,(undefined1)local_398,local_3e2,
                                2);
      if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
      if ((int)local_3c0 != 0) {
        uVar10 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar10,0x10);
        if (cVar2 == '\0') goto LAB_1003aca52;
        puVar12 = &local_3b8;
        local_3b8 = 0x8220202;
        local_3b4 = "Assertion failure";
        local_3ac = 0x400;
        local_3aa = (undefined4)local_3c0;
        goto LAB_1003ad1a3;
      }
    }
    if (local_3d0 != (ulong *)0x0) {
      if ((*local_3d0 & 0x8000000) != 0) {
        uVar14 = 0x54543320;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54495433;
        }
        FUN_10042ae01(param_4,0x54495433);
        FUN_10042ae01(param_4,0x54543320);
        uVar3 = *(ushort *)((long)local_3d0 + 0x17c4);
        if (uVar3 != 0) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x17c6,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
      if ((*local_3d0 & 0x4000000) != 0) {
        uVar14 = 0x54435420;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54434154;
        }
        FUN_10042ae01(param_4,0x54434154);
        FUN_10042ae01(param_4,0x54435420);
        uVar3 = *(ushort *)((long)local_3d0 + 0x15c4);
        if (uVar3 != 0) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x15c6,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
    }
    if ((param_3 != (uint *)0x0) && ((*param_3 & 1) != 0)) {
      uVar14 = 0x54445320;
      if ((byte)local_3c4 < 2) {
        uVar14 = 0x54444553;
      }
      FUN_10042ae01(param_4,0x54444553);
      FUN_10042ae01(param_4,0x54445320);
      psVar1 = *(short **)(param_3 + 3);
      if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        local_3c0 = 0xffffff32;
        if ((char)local_3c8 != '\0') goto LAB_1003aca52;
        uVar5 = FUN_1001dfe99(psVar1);
        local_3c0 = FUN_10042bf9c(param_4,uVar14,psVar1,uVar5);
        if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
        if ((int)local_3c0 != 0) {
          uVar10 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar10,0x10);
          if (cVar2 == '\0') goto LAB_1003aca52;
          puVar12 = &local_398;
          local_398 = 0x8220202;
          uStack_394 = 0x1007a0a90;
          uStack_38f = 0;
          uStack_38e = 0;
          local_38c = 0x400;
          local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
          goto LAB_1003ad1a3;
        }
      }
    }
    if (local_3d0 != (ulong *)0x0) {
      uVar8 = *local_3d0;
      if ((uVar8 >> 0x2d & 1) != 0) {
        uVar14 = 0x54535420;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54534f54;
        }
        FUN_10042ae01(param_4,0x54534f54);
        FUN_10042ae01(param_4,0x54535420);
        uVar3 = (ushort)local_3d0[0x43d];
        uVar8 = *local_3d0;
        if ((uVar3 != 0) && (((uVar8 >> 0x33 & 1) == 0 || (-1 < (char)local_3d0[0x5bd])))) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x21ea,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
          uVar8 = *local_3d0;
        }
      }
      if ((uVar8 >> 0x2e & 1) != 0) {
        uVar14 = 0x54534120;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54534f41;
        }
        FUN_10042ae01(param_4,0x54534f41);
        FUN_10042ae01(param_4,0x54534120);
        uVar3 = (ushort)local_3d0[0x47d];
        uVar8 = *local_3d0;
        if ((uVar3 != 0) &&
           (((uVar8 >> 0x34 & 1) == 0 || (-1 < *(char *)((long)local_3d0 + 0x2de9))))) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x23ea,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
          uVar8 = *local_3d0;
        }
      }
      if ((uVar8 >> 0x2f & 1) != 0) {
        uVar14 = 0x54535020;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54534f50;
        }
        FUN_10042ae01(param_4,0x54534f50);
        FUN_10042ae01(param_4,0x54535020);
        uVar3 = (ushort)local_3d0[0x4bd];
        uVar8 = *local_3d0;
        if ((uVar3 != 0) &&
           (((uVar8 >> 0x35 & 1) == 0 || (-1 < *(char *)((long)local_3d0 + 0x2dea))))) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x25ea,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
          uVar8 = *local_3d0;
        }
      }
      if ((uVar8 >> 0x30 & 1) != 0) {
        uVar14 = 0x54533220;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54534f32;
        }
        FUN_10042ae01(param_4,0x54534f32);
        FUN_10042ae01(param_4,0x54533220);
        uVar3 = (ushort)local_3d0[0x4fd];
        uVar8 = *local_3d0;
        if ((uVar3 != 0) &&
           (((uVar8 >> 0x36 & 1) == 0 || (-1 < *(char *)((long)local_3d0 + 0x2deb))))) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x27ea,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
          uVar8 = *local_3d0;
        }
      }
      if ((uVar8 >> 0x31 & 1) != 0) {
        uVar14 = 0x54534320;
        if ((byte)local_3c4 < 2) {
          uVar14 = 0x54534f43;
        }
        FUN_10042ae01(param_4,0x54534f43);
        FUN_10042ae01(param_4,0x54534320);
        uVar3 = (ushort)local_3d0[0x53d];
        if ((uVar3 != 0) &&
           (((*local_3d0 & 0x80000000000000) == 0 || (-1 < *(char *)((long)local_3d0 + 0x2dec))))) {
          local_3c0 = 0xffffff32;
          if ((char)local_3c8 != '\0') goto LAB_1003aca52;
          if (0xfe < uVar3) {
            uVar3 = 0xff;
          }
          local_3c0 = FUN_10042bf9c(param_4,uVar14,(long)local_3d0 + 0x29ea,uVar3);
          if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
          if ((int)local_3c0 != 0) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 == '\0') goto LAB_1003aca52;
            puVar12 = &local_398;
            local_398 = 0x8220202;
            uStack_394 = 0x1007a0a90;
            uStack_38f = 0;
            uStack_38e = 0;
            local_38c = 0x400;
            local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
            goto LAB_1003ad1a3;
          }
        }
      }
    }
    local_3c0 = 0;
    if (param_3 != (uint *)0x0) {
      uVar6 = *param_3;
      if ((uVar6 & 0x10) != 0) {
        FUN_1002a92ad(param_4,*(undefined8 *)(param_3 + 0xb),0,0);
        uVar6 = *param_3;
      }
      if ((uVar6 & 8) != 0) {
        FUN_1001b7eb0(&local_398,*(undefined8 *)(param_3 + 9));
        uVar14 = 0x554c5420;
        if (2 < *(byte *)((long)param_4 + 0xb)) {
          uVar14 = 0x55534c54;
        }
        uVar10 = FUN_1001b8336(&local_398);
        uVar5 = FUN_1001b8378(&local_398);
        local_3c0 = 0;
        FUN_10042b895(param_4,uVar14,0,0,uVar10,uVar5);
        FUN_1001b7a50(&local_398);
      }
    }
  }
  else {
    uVar14 = 0x54543220;
    if ((byte)local_3c4 < 2) {
      uVar14 = 0x54495432;
    }
    FUN_10042ae01(param_4,0x54495432);
    FUN_10042ae01(param_4,0x54543220);
    uVar3 = *(ushort *)(param_1 + 8);
    if (uVar3 == 0) goto LAB_1003ab4de;
    if ((char)param_5 != '\0') {
      local_3c0 = 0xffffff32;
      if (0x1e < uVar3) goto LAB_1003aca52;
      local_3d8 = param_4;
      local_3c8 = param_5;
      cVar2 = FUN_1001e54d7(param_1 + 8);
      if (cVar2 == '\0') goto LAB_1003aca52;
      uVar3 = *(ushort *)(param_1 + 8);
      param_4 = local_3d8;
      param_5 = local_3c8;
    }
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
    local_3c0 = FUN_10042bf9c(param_4,uVar14,param_1 + 10,uVar3);
    if ((int)local_3c0 == -0x80) goto LAB_1003aca52;
    if ((int)local_3c0 == 0) goto LAB_1003ab4de;
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 == '\0') goto LAB_1003aca52;
    puVar12 = &local_398;
    local_398 = 0x8220202;
    uStack_394 = 0x1007a0a90;
    uStack_38f = 0;
    uStack_38e = 0;
    local_38c = 0x400;
    local_38a = (char *)CONCAT44(local_38a._4_4_,(int)local_3c0);
LAB_1003ad1a3:
    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",puVar12,0x12);
  }
LAB_1003aca52:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_3c0;
}

