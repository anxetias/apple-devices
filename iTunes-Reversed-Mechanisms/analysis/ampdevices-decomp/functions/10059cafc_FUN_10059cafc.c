// name: FUN_10059cafc
// address: 10059cafc

undefined1 FUN_10059cafc(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  
  uVar1 = FUN_10059cb56(param_1,&cf_ImageSpecifications);
  cVar2 = FUN_10059cb56(param_1,&cf_AlbumArt);
  cVar3 = FUN_10059cb56(param_1,&cf_ChapterImageSpecs);
  uVar4 = 1;
  if (cVar3 == '\0' && cVar2 == '\0') {
    uVar4 = uVar1;
  }
  return uVar4;
}

