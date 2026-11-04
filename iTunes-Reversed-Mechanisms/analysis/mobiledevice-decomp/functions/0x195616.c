// rea decompile_all
// name: _RPCreateSocketAcceptingWithAddress
// address: 0x195616
// body: available
// range: 0x195616-0x19593a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _RPCreateSocketAcceptingWithAddress(sockaddr *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  socklen_t sVar11;
  cfstringStruct *pcVar12;
  ushort uVar13;
  sa_family_t sVar14;
  undefined4 local_2c;
  
  local_2c = 1;
  if (param_1 == (sockaddr *)0x0) {
    lVar5 = _getDefaultLogCtx();
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x10) < 3) {
      return 0;
    }
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    uVar8 = _CFStringCreateWithCString(0,pcVar7,0x8000100);
    uVar9 = 0x4ab;
    sVar14 = '\0';
    pcVar12 = &cf_invalidargument_bindAddr__p_;
LAB_001957da:
    _LogMsg(3,lVar5,uVar4,uVar9,"RPCreateSocketAcceptingWithAddress",uVar8,pcVar12,sVar14);
    return 0;
  }
  bVar1 = param_1->sa_family;
  if ((bVar1 == 0x1e) || (bVar1 == 2)) {
    uVar13 = *(ushort *)param_1->sa_data << 8 | *(ushort *)param_1->sa_data >> 8;
  }
  else {
    uVar13 = 0;
  }
  iVar2 = _socket((uint)bVar1,1,0);
  if (iVar2 == -1) {
    lVar5 = _getDefaultLogCtx();
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x10) < 3) {
      return 0;
    }
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    uVar8 = _CFStringCreateWithCString(0,pcVar7,0x8000100);
    sVar14 = param_1->sa_family;
    uVar9 = 0x4b2;
    pcVar12 = &cf_socket__d_SOCK_STREAM_;
    goto LAB_001957da;
  }
  if ((uVar13 == 0) || (iVar3 = _setsockopt(iVar2,0xffff,4,&local_2c,4), iVar3 != -1)) {
    uVar10 = (uint)param_1->sa_len;
    if (param_1->sa_len == 0) {
      sVar11 = 0x1c;
      if (param_1->sa_family != '\x1e') {
        sVar11 = 0;
      }
      uVar10 = 0x10;
      if (param_1->sa_family != '\x02') {
        uVar10 = sVar11;
      }
    }
    iVar3 = _bind(iVar2,param_1,uVar10);
    if (iVar3 == -1) {
      lVar5 = _getDefaultLogCtx();
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) < 3)) goto LAB_00195922;
      uVar4 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      piVar6 = ___error();
      pcVar7 = _strerror(*piVar6);
      uVar8 = _CFStringCreateWithCString(0,pcVar7,0x8000100);
      pcVar12 = &cf_bind_port__d_;
      uVar9 = 0x4bf;
    }
    else {
      iVar3 = _listen(iVar2,0x80);
      if (iVar3 != -1) {
        uVar4 = _RPCreateSocketForFD(iVar2,1);
        return uVar4;
      }
      lVar5 = _getDefaultLogCtx();
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) < 3)) goto LAB_00195922;
      uVar4 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      piVar6 = ___error();
      pcVar7 = _strerror(*piVar6);
      uVar8 = _CFStringCreateWithCString(0,pcVar7,0x8000100);
      pcVar12 = &cf_listen_port__d_;
      uVar9 = 0x4c4;
    }
  }
  else {
    lVar5 = _getDefaultLogCtx();
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) < 3)) goto LAB_00195922;
    uVar4 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    uVar8 = _CFStringCreateWithCString(0,pcVar7,0x8000100);
    pcVar12 = &cf_setsockopt_SO_REUSEADDR_port__d_;
    uVar9 = 0x4b8;
  }
  _LogMsg(3,lVar5,uVar4,uVar9,"RPCreateSocketAcceptingWithAddress",uVar8,pcVar12,uVar13);
LAB_00195922:
  _close(iVar2);
  return 0;
}

