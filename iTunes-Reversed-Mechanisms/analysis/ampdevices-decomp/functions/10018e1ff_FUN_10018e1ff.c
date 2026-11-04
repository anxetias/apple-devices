// name: FUN_10018e1ff
// address: 10018e1ff

undefined1 FUN_10018e1ff(long param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  
  cVar2 = FUN_10017cbd0();
  if (cVar2 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100692bb0(uVar7);
    }
    uVar8 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar5 = _opendir_INODE64(param_1 + 0x19);
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      lVar6 = _readdir_INODE64(lVar5);
      uVar8 = 1;
      while (lVar6 != 0) {
        uVar3 = *(byte *)(lVar6 + 0x15) - 0x2e;
        if (uVar3 == 0) {
          if (*(byte *)(lVar6 + 0x16) != 0) {
            uVar3 = *(byte *)(lVar6 + 0x16) - 0x2e;
            if (uVar3 == 0) {
              uVar3 = (uint)*(byte *)(lVar6 + 0x17);
            }
            goto LAB_10018e25e;
          }
        }
        else {
LAB_10018e25e:
          if (uVar3 != 0) {
            pcVar1 = (char *)(lVar6 + 0x15);
            iVar4 = _strcmp(pcVar1,".DS_Store");
            if (((iVar4 != 0) && (iVar4 = _strcmp(pcVar1,"Icon\r"), iVar4 != 0)) &&
               ((iVar4 = _strcmp(pcVar1,".localized"), iVar4 != 0 ||
                (*(char *)(lVar6 + 0x14) != '\x04')))) {
              uVar8 = 0;
              break;
            }
          }
        }
        lVar6 = _readdir_INODE64(lVar5);
      }
      _closedir(lVar5);
    }
  }
  return uVar8;
}

