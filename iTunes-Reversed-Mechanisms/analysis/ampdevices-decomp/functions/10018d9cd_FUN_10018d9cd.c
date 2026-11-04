// name: FUN_10018d9cd
// address: 10018d9cd

void FUN_10018d9cd(void)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  
  FUN_10041520b();
  DAT_1008c4dc8 = _DASessionCreate(0);
  DAT_100890660 = FUN_1001e9c3e(&DAT_100890668);
  if (DAT_100890660 == 0) {
    FUN_1001c0fbe(FUN_10018dc27,0,0,0,0);
    FUN_1001e9de0(&DAT_100890668);
    local_38 = (void *)0x0;
    uVar4 = _getmntinfo_r_np_INODE64(&local_38,2);
    if (uVar4 == 0) {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        FUN_1006926b2(uVar8);
      }
      cVar3 = FUN_1001782e9(0,0);
      if (cVar3 == '\0') {
        piVar7 = ___error();
        DAT_100890660 = FUN_1001eb020(*piVar7);
      }
    }
    else if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        pvVar2 = local_38;
        iVar5 = _strcmp((char *)((long)local_38 + lVar9 + 0x48),"devfs");
        if (iVar5 != 0) {
          puVar6 = operator_new(0x438,(nothrow_t *)PTR_nothrow_10082c970);
          if (puVar6 == (undefined8 *)0x0) {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              FUN_10069263c(uVar8);
            }
            FUN_1001782e9(0,0);
            DAT_100890660 = -0x6c;
            break;
          }
          iVar5 = *(int *)((long)pvVar2 + lVar9 + 4);
          if (iVar5 == 0x1000) {
            iVar5 = 0x100000;
          }
          puVar6[0x85] = (long)iVar5;
          uVar1 = *(uint *)((long)pvVar2 + lVar9 + 0x40);
          *(bool *)(puVar6 + 0x86) = (uVar1 >> 0xc & 1) == 0;
          *(byte *)((long)puVar6 + 0x431) = (byte)(uVar1 >> 0xe) & 1;
          FUN_10018dce1((long)pvVar2 + lVar9 + 0x58,puVar6 + 1);
          *(undefined4 *)((long)puVar6 + 0x424) = *(undefined4 *)((long)pvVar2 + lVar9 + 0x30);
          *(undefined1 *)(puVar6 + 4) = 1;
          *(undefined2 *)((long)puVar6 + 0xc) = 6;
          if (*(char *)((long)puVar6 + 0x431) == '\x01') {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            iVar5 = _stat_INODE64((long)puVar6 + 0x21,&local_c8);
            if (iVar5 == 0) {
              *(undefined4 *)((long)puVar6 + 0x424) = (undefined4)local_c8;
            }
          }
          *puVar6 = 0;
          FUN_1001930a7(&DAT_1008906b0,puVar6);
        }
        lVar9 = lVar9 + 0x878;
      } while ((ulong)uVar4 * 0x878 - lVar9 != 0);
    }
    _free(local_38);
    FUN_1001e9eb9(&DAT_100890668);
  }
  return;
}

