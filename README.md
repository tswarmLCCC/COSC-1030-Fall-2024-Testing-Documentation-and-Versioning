# Software Project Template

This Template is a boiler plate example of using Github, source and documenation directories, unit tests, and depedencies.  

Some useful commands

## Setup

```bash
git clone https://github.com/tswarmLCCC/AIXX_Rag_EssayGrade.git
```

This runs well on Python 3.9.  The requirements can be found in requirements.txt in the root directory.  They can be installed with pip:

```bash
pip install -r requirements.txt
```

## Usage

These are important scripts to run and/or use for major functionality:

```bash
streamlit run 01_Chat.py
```

Or from a VM:
```bash
c:\Python\Python39\python.exe -m venv c:\env\streamlit_rag
C:\env\streamlit_rag\Scripts\Activate.ps1
pip install-r requirements.txt
```

```bash
PS C:\dev\StreamLit Rag> C:\env\streamlit_rag\Scripts\Activate.ps1
(streamlit_rag) PS C:\dev\StreamLit Rag> streamlit run .\ollama_streamlit_demos\01_Chat.py
```

Navigate to the URL provided by Streamlit in your browser to interact with the app.

**NB: Make sure you have downloaded [Ollama](https://ollama.com/) to your system.**

## Contributing

Please feel free to contact me at my work email - tswarm@lccc.wy.edu

## Acknowledgments

👏 Several Open Source projects for examples of good practice.
