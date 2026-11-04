// name: FUN_1001797cd
// address: 1001797cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001797cd(undefined4 *param_1,char param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  
  FUN_1001c62d9(param_1,0x90);
  *param_1 = 0x48617368;
  *(char *)(param_1 + 1) = param_2;
  bVar4 = param_2 - 1;
  if (bVar4 < 4) {
    puVar1 = (&PTR_FUN_10083c148)[bVar4];
    puVar2 = (&PTR_FUN_10083c168)[bVar4];
    *(undefined **)(param_1 + 2) = (&switchD_100179832::switchdataD_10083c128)[bVar4];
    *(undefined **)(param_1 + 4) = puVar1;
    *(undefined **)(param_1 + 6) = puVar2;
    uVar3 = _UNK_10070e4e8;
    switch(param_2) {
    case '\x01':
      _CC_MD5_Init((CC_MD5_CTX *)(param_1 + 10));
      return 0;
    case '\x02':
      _CC_SHA1_Init((CC_SHA1_CTX *)(param_1 + 10));
      return 0;
    case '\x03':
      *(undefined8 *)(param_1 + 10) = _DAT_10070e4e0;
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      return 0;
    case '\x04':
      _CC_SHA256_Init((CC_SHA256_CTX *)(param_1 + 10));
      return 0;
    }
  }
  return 0xffffffce;
}

