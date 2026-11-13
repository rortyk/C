# C

C 言語の学習用リポジトリです。ポインタやメモリ領域、構造体などの練習コードを置いています。

作品リポジトリではなく、あくまで練習・実験用です。

## ディレクトリ構成

```
C/
├── README.md
├── .gitignore
└── basics/         # 基本文法の練習
    └── code.c
```

学習テーマが増えたら、`basics/` と同じようにフォルダを追加していきます。

## 過去の練習

`code.c` は 1 つのファイルを書き換えながら練習してきたため、過去の練習内容（ポインタ、メモリ領域、ダンジョン、puzmon など）は git の履歴にだけ残っています。

```bash
git log --oneline --follow basics/code.c   # 移動前（code.c 時代）も含めて履歴を表示
git show <コミットID>:code.c               # 2026-11-12 より前のコミットの内容を表示
git show <コミットID>:basics/code.c        # それ以降のコミットの内容を表示
```

## 環境

- Ubuntu 24.04
- gcc 13.3.0

## 動かし方

リポジトリのルートでコンパイルして実行します。実行ファイルは `exedir/` に出力します（`.gitignore` で除外しているため、リポジトリには含まれません）。

```bash
mkdir -p exedir
gcc -Wall -Wextra -o exedir/code basics/code.c
./exedir/code
```
