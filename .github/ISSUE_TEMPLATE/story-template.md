name: Story
description: A template for creating detailed stories with all necessary information.
title: "[Story] "
labels: 
  - story

body:
  - type: markdown
    attributes:
      value: |
        ## Story

  - type: textarea
    id: description
    attributes:
      label: Description
      description: Describe the purpose of this story and the functionality it aims to deliver.
    validations:
      required: true

  - type: input
    id: epic_reference
    attributes:
      label: Epic Reference
      description: Link to the associated Epic that this story belongs to.
      placeholder: |
        #
    validations:
      required: false

  - type: textarea
    id: tasks_in_story
    attributes:
      label: Tasks in this Story
      description: List the tasks that belong to this story. Add each task as a link or reference number on a new line.
      placeholder: |
        - [ ] #
    validations:
      required: false

  - type: dropdown
    id: priority
    attributes:
      label: Priority
      description: Select the priority level for this story.
      options:
        - Critical
        - High
        - Medium
        - Low
    validations:
      required: true

  - type: markdown
    attributes:
      value: |
        ### ⚠️ Assignees
        **Note:** Please ensure to assign at least one responsible person to this story. The story cannot proceed without an assignee.