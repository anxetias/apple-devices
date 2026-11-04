// name: FUN_100333253
// address: 100333253

undefined8 FUN_100333253(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  uVar1 = FUN_100333169(param_1);
  if ((uVar1 & 0x20) != 0) {
    if ((*(byte *)(param_1 + 0x166e0) & 4) == 0) {
      FUN_1001709a5(uVar3,&cf_Music);
    }
    if ((*(char *)(param_1 + 0x14d6d) != '\0') && ((*(byte *)(param_1 + 0x166e0) & 8) == 0)) {
      FUN_1001709a5(uVar3,&cf_MusicVideo);
    }
  }
  if ((uVar1 & 0x40) != 0) {
    uVar2 = *(uint *)(param_1 + 0x166e0);
    if ((uVar2 & 2) == 0) {
      FUN_1001709a5(uVar3,&cf_Movie);
      uVar2 = *(uint *)(param_1 + 0x166e0);
    }
    if ((uVar2 >> 9 & 1) == 0) {
      FUN_1001709a5(uVar3,&cf_HomeVideo);
    }
  }
  if (((char)uVar1 < '\0') && ((*(byte *)(param_1 + 0x166e0) & 0x10) == 0)) {
    FUN_1001709a5(uVar3,&cf_TVEpisode);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x166e0);
    if ((uVar2 & 0x20) == 0) {
      FUN_1001709a5(uVar3,&cf_Podcast);
      uVar2 = *(uint *)(param_1 + 0x166e0);
    }
    if ((uVar2 & 0x40) == 0) {
      FUN_1001709a5(uVar3,&cf_VideoPodcast);
    }
  }
  if (((uVar1 >> 0xb & 1) != 0) && ((*(byte *)(param_1 + 0x166e0) & 1) == 0)) {
    FUN_1001709a5(uVar3,&cf_Audiobook);
  }
  return uVar3;
}

