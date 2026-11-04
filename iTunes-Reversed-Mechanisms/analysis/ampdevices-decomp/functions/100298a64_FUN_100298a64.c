// name: FUN_100298a64
// address: 100298a64

undefined4
FUN_100298a64(long param_1,undefined8 param_2,long *param_3,char *param_4,undefined8 param_5,
             undefined8 param_6,int param_7,undefined2 param_8,char *param_9,int param_10)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_70 [4];
  char *local_60;
  char *local_58;
  int local_50 [4];
  char *local_40;
  long local_38;
  
  if (param_7 < 0x54454e00) {
    if (param_7 < 0x50435320) {
      if (((param_7 != 0x434f4d00) && (param_7 != 0x434f4d20)) && (param_7 != 0x434f4d4d))
      goto LAB_100298d99;
      pcVar9 = (char *)param_3[6];
      local_60 = param_9;
      local_38 = param_1;
      if ((pcVar9 != (char *)0x0) && (*pcVar9 == '\0')) {
        FUN_100427e75(param_1 + 4,param_9,param_10,pcVar9,0xff);
        pcVar9 = (char *)param_3[6];
        if (*pcVar9 == '\0') {
          FUN_100428138(param_1 + 4,param_9,param_10,pcVar9 + 1,0xfe,local_50);
          *(undefined1 *)param_3[6] = (undefined1)local_50[0];
          pcVar9 = (char *)param_3[6];
        }
        local_40 = pcVar9 + 1;
        iVar4 = _strncmp(local_40,"MusicMatch",10);
        if (iVar4 == 0) {
          *pcVar9 = '\n';
        }
        else {
          local_58 = pcVar9;
          iVar4 = _strncmp(local_40,"Amazon.com",10);
          if (iVar4 == 0) {
            FUN_1001dfc9d(local_58,param_3[5]);
            FUN_1001dfb1f("LAME",param_3[6],5);
          }
          else {
            *local_58 = '\0';
          }
        }
      }
      cVar3 = FUN_100427fb0(param_9,param_10,local_50,local_70);
      param_1 = local_38;
      pcVar9 = local_60;
      if (((cVar3 != '\0') && (param_4 != (char *)0x0)) && (local_50[0] == 0x4e4f524d)) {
        param_10 = ~local_70[0] + param_10;
        local_40 = param_4;
        FUN_1001c62d9(param_4,0x34);
        pcVar2 = local_40;
        local_60 = param_9 + (int)local_70[0];
        iVar4 = FUN_1003a92b4(param_9 + (int)local_70[0],param_10,local_40);
        param_1 = local_38;
        pcVar9 = local_60;
        if (iVar4 == 0) {
          builtin_strncpy(pcVar2,"nuTiMRON",8);
        }
      }
    }
    else {
      pcVar9 = param_9;
      if ((param_7 != 0x50435320) && (param_7 != 0x50435354)) {
        if (param_7 == 0x50524956) {
          if (param_3[2] == 0) {
            return 0;
          }
          sVar6 = _strlen(param_9);
          uVar8 = ~(uint)sVar6 + param_10;
          if ((int)uVar8 < 1) {
            return 0;
          }
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            if ((param_9 + (long)(int)(uint)sVar6 + 1)[uVar10] == '\0') break;
            uVar10 = uVar10 + 1;
            uVar11 = (ulong)uVar8;
          } while (uVar8 != uVar10);
          FUN_1001b7b34(local_50,param_9 + (long)(int)(uint)sVar6 + 1,uVar11);
          FUN_1001b7b04(local_70,"uits:UITS");
          cVar3 = FUN_1001ba31c(local_50,local_70,0);
          FUN_1001b7a50(local_70);
          if (cVar3 != '\0') {
            lVar7 = FUN_1001b8d0c(local_50);
            pbVar1 = (byte *)param_3[2];
            *(long *)(pbVar1 + 0x3c) = lVar7;
            if (lVar7 != 0) {
              *pbVar1 = *pbVar1 | 0x80;
            }
          }
          FUN_1001b7a50(local_50);
          return 0;
        }
        goto LAB_100298d99;
      }
    }
    *(undefined1 *)(param_3 + 7) = 1;
    param_9 = pcVar9;
  }
  else if (param_7 < 0x54535300) {
    if (((param_7 == 0x54454e00) || (param_7 == 0x54454e20)) || (param_7 == 0x54454e43)) {
      pcVar9 = (char *)param_3[5];
      if (pcVar9 == (char *)0x0) {
        return 0;
      }
LAB_100298cc6:
      FUN_1004272d9(param_1 + 4,param_9,param_10,pcVar9,0xff);
      return 0;
    }
  }
  else if (((param_7 == 0x54535300) || (param_7 == 0x54535320)) || (param_7 == 0x54535345)) {
    pcVar9 = (char *)param_3[6];
    if (pcVar9 == (char *)0x0) {
      return 0;
    }
    if (*pcVar9 != '\0') {
      return 0;
    }
    goto LAB_100298cc6;
  }
LAB_100298d99:
  if (*param_3 == 0) {
    return 0;
  }
  uVar5 = FUN_1003a996e(param_1,*param_3,param_3[1],param_3[3],param_3[2],param_3[4],param_7,param_8
                        ,param_9,param_10);
  return uVar5;
}

