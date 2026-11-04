// name: FUN_1004cc123
// address: 1004cc123

void FUN_1004cc123(int *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  byte bVar6;
  byte bVar7;
  undefined1 local_598 [44];
  uint local_56c;
  undefined1 local_568 [1072];
  byte local_138;
  undefined1 local_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0) {
    pbVar1 = (byte *)(param_1 + 0x406);
    cVar3 = FUN_1001e36e8(pbVar1,"PACKAGE#TRACKLIST#TRACK#",1);
    if ((cVar3 != '\0') && (cVar3 = FUN_1001e091e(param_1 + 0x5c6,"mp3",1), cVar3 != '\0')) {
      param_1[0x646] = 0xc800;
      FUN_1001dfb1f("http://",&local_138,0xff);
      FUN_1001df0f0(param_1 + 0x446,&local_138);
      FUN_1001df0f0(param_1 + 0x486,&local_138);
      cVar3 = FUN_1001e087a(&local_138,"%lid",0);
      if (cVar3 != '\0') {
        do {
          FUN_1001dfdef(&local_138,cVar3,4);
          FUN_1001e484d(param_1 + 0x506,cVar3,&local_138);
          cVar3 = FUN_1001e087a(&local_138,"%lid",0);
        } while (cVar3 != '\0');
      }
      cVar3 = FUN_1001e087a(&local_138,"%fid",0);
      if (cVar3 != '\0') {
        do {
          FUN_1001dfdef(&local_138,cVar3,4);
          FUN_1001e484d(param_1 + 0x546,cVar3,&local_138);
          cVar3 = FUN_1001e087a(&local_138,"%fid",0);
        } while (cVar3 != '\0');
      }
      cVar3 = FUN_1001e087a(&local_138,"%d",0);
      if (cVar3 != '\0') {
        do {
          FUN_1001dfdef(&local_138,cVar3,2);
          FUN_1001e484d(param_1 + 0x606,cVar3,&local_138);
          cVar3 = FUN_1001e087a(&local_138,"%d",0);
        } while (cVar3 != '\0');
      }
      cVar3 = FUN_1001e087a(&local_138,"%f",0);
      if (cVar3 != '\0') {
        do {
          FUN_1001dfdef(&local_138,cVar3,2);
          FUN_1001e484d(param_1 + 0x586,cVar3,&local_138);
          cVar3 = FUN_1001e087a(&local_138,"%f",0);
        } while (cVar3 != '\0');
      }
      cVar3 = FUN_1001e087a(&local_138,"%pid",0);
      if (cVar3 != '\0') {
        do {
          FUN_1001dfdef(&local_138,cVar3,4);
          FUN_1001e484d(param_1 + 0x4c6,cVar3,&local_138);
          cVar3 = FUN_1001e087a(&local_138,"%pid",0);
        } while (cVar3 != '\0');
      }
      pbVar2 = (byte *)(param_1 + 0x646);
      if ((short)param_1[0x648] != 0) {
        *pbVar2 = *pbVar2 | 1;
      }
      if ((short)param_1[0x748] != 0) {
        *pbVar2 = *pbVar2 | 4;
      }
      if ((short)param_1[0x7c8] != 0) {
        *pbVar2 = *pbVar2 | 8;
      }
      if ((short)param_1[0x848] != 0) {
        *pbVar2 = *pbVar2 | 0x10;
      }
      FUN_1001c631b(local_137,local_568,local_138);
      local_56c = (uint)local_138;
      iVar4 = (**(code **)(param_1 + 2))(0x48545450,local_598,pbVar2,*(undefined8 *)(param_1 + 4));
      if (iVar4 == -0x80) {
        *param_1 = -0x80;
      }
    }
    if (*pbVar1 != 0) {
      bVar6 = *pbVar1 - 1;
      *pbVar1 = bVar6;
      if (bVar6 != 0) {
        sVar5 = _strlen(param_2);
        bVar7 = bVar6;
        if ((int)sVar5 < (int)(uint)bVar6) {
          bVar7 = (byte)sVar5;
        }
        *pbVar1 = bVar6 - bVar7;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

